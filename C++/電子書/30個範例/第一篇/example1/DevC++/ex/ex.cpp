/*
	�d��1�G���d�ҥΩ�ܽdC++���򥻿�J�P��X����k
	�`�N�G������4996ĵ�i�C
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int noodle, soda, bread;  //�w�ѡB�T���B�ѥ]
	float mNoodle, mSoda, mBread;//�ʶR���~���O��
	float total; //���I���B

	noodle = 0;
	soda = 0;
	bread = 0;

	system("cls"); //�M���ù�
	printf("+============================+\n");
	printf("|  �ڮa�W�ӭ��~�ʶR�p��{��  |\n");
	printf("+============================+\n");

	printf("%s", "�ʶR�w�Ѫ��ƶq�G");
	scanf("%d", &noodle); //Ū���ʶR�w�Ѫ��ƶq
	cout << "�ʶR�T���P�ѥ]���ƶq�G";
	cin >> soda >> bread;  //Ū���ʶR�T���P�ѥ]���ƶq
	cout << endl;

	//���I���B
	mNoodle = noodle * 15;
	mSoda = soda * 20.3;
	mBread = bread * 18.2;
	total = mNoodle + mSoda + mBread;

	//��ܼ��D
	cout << setw(10) << left << "���~" << setw(10) << "���"
		<< setw(10) << "�ƶq" << setw(10) << right << "���B" << endl;
	cout << "----------------------------------------\n";

	//�w�Ѫ��ʶR��T
	cout << setw(10) << left << "�w��" << setw(10) << "15��"
		<< setw(10) << noodle << setw(10) << right << fixed
		<< setprecision(2) << mNoodle << endl;

	//�T�����ʶR��T
	cout << setw(10) << left << "�T��" << setw(10) << "20.3��"
		<< setw(10) << soda << setw(10) << right << fixed
		<< setprecision(2) << mSoda << endl;

	//�ѥ]���ʶR��T
	cout << setw(10) << left << "�ѥ]" << setw(10) << "18.2��"
		<< setw(10) << bread << setw(10) << right << fixed
		<< setprecision(2) << mBread << endl;

	//������I���B
	cout << "----------------------------------------\n";
	cout << "���I�G" << setw(34) << right << total << endl;

	system("pause");
}
