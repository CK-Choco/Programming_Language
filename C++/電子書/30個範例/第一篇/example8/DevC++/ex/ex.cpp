#include <iostream>
using namespace std;

int main()
{
	int total = 0; //總共儲存的錢
	int money; //每次儲存的錢
	int price; //遊戲機的錢

	cout << "輸入平板電腦的價錢：";
	cin >> price;

	if (price <= 0)
	{
		cout << "輸入錯誤";
		exit(0);
	}

	//-----------------------------------------
	while (total < price)
	{
		cout << "此次儲存多少錢：";
		cin >> money;
		if (money <= 0)
			cout << "輸入金額錯誤，重新輸入。" << endl;
		else
		{
			total += money;
			cout << "已經儲存了 " << total << " 元";
			if (price > total)
				cout << "，尚差 " << price - total << " 元" << endl;
		}
	}
	cout << "已經可以買平板電腦了。" << endl;
	system("pause");
}
