#include <iostream>
#include <conio.h>
using namespace std;

//----------------------------
void showMenu(void)
{
	system("cls");

	cout << "1. 存款" << endl;
	cout << "2. 取款" << endl;
	cout << "3. 顯示餘額" << endl;
	cout << "4. 結束" << endl;
	cout << "輸入選擇(1-4): ";
}

//-------------------------
bool func(int sel, int amount)
{
	static int money = 0;
	bool fg = true;

	switch (sel)
	{
		case 1:
			money += amount;			
			break;

		case 2:
			if (money - amount < 0)
				fg = false;
			else
				money -= amount;			
			break;

		case 3:
			cout << "餘額= " << money << endl;
			break;
	}

	return fg;
}

int main()
{
	int sel;
	int amount;

	while (true)
	{
		showMenu();
		cin >> sel;

		switch (sel)
		{
			case 1:	
			case 2:
				cout << "輸入金額：";
				cin >> amount;
				if (!func(sel, amount))
					cout << "存款餘額不足，";
				break;
			case 3:  func(sel,0);
				break;
		
			case 4: exit(0);
				break;

			default:
				cout << "輸入錯誤，";				
				break;
		}
		cout << "按鍵繼續...";
		while (!_kbhit());
	}

	system("pause");
}
