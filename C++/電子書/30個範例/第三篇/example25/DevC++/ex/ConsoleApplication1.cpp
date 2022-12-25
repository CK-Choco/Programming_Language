#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;

struct _BOXEDMEAL
{
	char name[20];  //�m�W
	char phone[20];  //�q��
	bool veg; //true:���� false:����
	bool porkChop; //true:�ư��K�� false:���L�K��
};

//-------- ��ܿ�� -----------------
void showMenu()
{
	system("cls");
	cout << "1. �s�W���" << endl;
	cout << "2. ��ܸ��" << endl;
	cout << "3. ����" << endl;
	cout << "��J���(1-3): ";
}

//------------- �g�J��� --------------
bool writeData(_BOXEDMEAL meal)
{
	fstream file;
	bool fg = true;
	
	file.open("doc.data", ios::binary | ios::out|ios::app);
	if (!file)	
		fg = false;
	else
	{
		file.write((char*)&meal, sizeof(_BOXEDMEAL));
		if (!file.good())
			fg = false;

		file.close();
	}
	return fg;
}

//------------- ��ܸ�� ----------------
void showData(_BOXEDMEAL meal)
{
	cout << "�m�W�G" << meal.name << endl;
	cout << "�~�֡G" << meal.phone << endl;
	if (meal.veg)
	    cout << "����" << endl;	
	else
	{
		if (meal.porkChop)
			cout << "�ޱƫK��" << endl;
		else
			cout << "���L�K��" << endl;
	}
	cout << endl;
}

//------------- Ū����� ----------------------------
bool readData()
{
	fstream file;
	_BOXEDMEAL meal;
	bool fg = true;
	
	file.open("doc.data", ios::binary | ios::in);
	if (!file)	
		fg = false;
	else
	{
		cout << "----- ��ܸ�� -----" << endl;
		while (file.read((char*)&meal, sizeof(_BOXEDMEAL)))
			showData(meal);

		file.close();
	}	

	return fg;
}

//------------- ��g��� ------------------
void  addData()
{
	_BOXEDMEAL meal;

	while (true)
	{
		cout << "\n��J�m�W(��J-1������J���)�G";
		cin >> meal.name;
		if (strcmp(meal.name, "-1")==0)
			return;

		cout << "��J�q�ܡG";
		cin >> meal.phone;
		cout << "(0)���� (1)�����G";
		cin >> meal.veg;

		if (!meal.veg)
		{
			cout << "(0)���L�K�� (1)�ư��K��G";
			cin >> meal.porkChop;
		}

		if (!writeData(meal))
		{
			cout << "�s�W��ƥ���" << endl;
			return;
		}
		else
			cout << "�s�W���OK" << endl;	
    }	
}

int main()
{
	int sel;

	while (true)
	{
		showMenu();
		cin >> sel;

		switch (sel)
		{
			case 1: addData();
				break;

			case 2: readData();
				break;

			case 3: exit(0);
				break;

			default: cout << "��J���~�A";
				break;
		}
		cout << "�����~��...";
		while (!_kbhit());
	}
	
	system("pause");
}
