#include <iostream>
using namespace std;

int main()
{
	int total;
	int money = 0;
	int day = 0, week = 0;

	cout << "��J�C�����������G";
	cin >> total;

	if (total <= 0)
	{
		cout << "��J���~�A���s��J";
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

	cout << "�`�@�s�F�G" << money << "��" << endl;
	cout << "�@��F " << day << "��" << endl;

	system("pause");
}
