#include <iostream>
using namespace std;

int main()
{
	int total = 0; //�`�@�x�s����
	int money; //�C���x�s����
	int price; //�C��������

	cout << "��J���O�q���������G";
	cin >> price;

	if (price <= 0)
	{
		cout << "��J���~";
		exit(0);
	}

	//-----------------------------------------
	while (total < price)
	{
		cout << "�����x�s�h�ֿ��G";
		cin >> money;
		if (money <= 0)
			cout << "��J���B���~�A���s��J�C" << endl;
		else
		{
			total += money;
			cout << "�w�g�x�s�F " << total << " ��";
			if (price > total)
				cout << "�A�|�t " << price - total << " ��" << endl;
		}
	}
	cout << "�w�g�i�H�R���O�q���F�C" << endl;
	system("pause");
}
