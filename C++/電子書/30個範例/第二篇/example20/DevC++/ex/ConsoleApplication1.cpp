#include <iostream>
#include <conio.h>
using namespace std;

//----------------------------
void showMenu(void)
{
	system("cls");

	cout << "1. �s��" << endl;
	cout << "2. ����" << endl;
	cout << "3. ��ܾl�B" << endl;
	cout << "4. ����" << endl;
	cout << "��J���(1-4): ";
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
			cout << "�l�B= " << money << endl;
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
				cout << "��J���B�G";
				cin >> amount;
				if (!func(sel, amount))
					cout << "�s�ھl�B�����A";
				break;
			case 3:  func(sel,0);
				break;
		
			case 4: exit(0);
				break;

			default:
				cout << "��J���~�A";				
				break;
		}
		cout << "�����~��...";
		while (!_kbhit());
	}

	system("pause");
}
