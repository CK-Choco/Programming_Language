/*
	�d��2�G���d�ҥΩ�ܽdC++���P�_�ԭzif
*/
#include <iostream>
using namespace std;

int main()
{
	int age; //�~��

	system("cls");
	cout << "��J�~�֡G";
	cin >> age;

	if (age < 0)
	{
		cout << "��J���~" << endl;
		return 0; //�����{��
	}

	cout << "�i�H�[�ݪ��q�v���G" << endl;

	if (age >= 18)
		cout << "�����18+�B ";

	if (age >= 15)
		cout << "���ɯ�15+�B ";

	if (age >= 12)
		cout << "���ɯ�12+�B ";

	if (age >= 6)
		cout << "�O�@�šB ";

	cout << "���M�� " << endl;

	system("pause");
}