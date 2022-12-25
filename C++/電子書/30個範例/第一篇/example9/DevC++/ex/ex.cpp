#include <iostream>
using namespace std;

int main()
{
	int total;
	int money = 0;
	int day = 0, week = 0;

	cout << "輸入遊戲機的價錢：";
	cin >> total;

	if (total <= 0)
	{
		cout << "輸入錯誤，重新輸入";
		exit(0);
	}

	while (true)
	{
		day++;
		week++;

		if ((week % 6 == 0) || (week % 7 == 0))
		{
			if (week % 7 == 0)
				week = 0;
			continue;
		}

		money += 100;

		if (money >= total)
			break;
	}

	cout << "總共存了：" << money << "元" << endl;
	cout << "共花了 " << day << "天" << endl;

	system("pause");
}
