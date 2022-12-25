#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;

struct _PRODUCT
{
	char name[20];
	int price;
};

//-------- ��ܿ�� -----------------
void showMenu()
{
	system("cls");
	cout << "1. �s�W���" << endl;
	cout << "2. ��ܸ��" << endl;
	cout << "3. �d�߸��" << endl;
	cout << "4. ����" << endl;
	cout << "��J���(1-4): ";
}

//-------- �s�W��� ----------------
void addData()
{
	fstream file;
	_PRODUCT product;
	bool fgRun = true;

	cout << "\n---- �s�W��� ----";

	file.open("data", ios::binary | ios::out|ios::app);
	if (!file.is_open())
	{
		cout << "�L�k�إ�/�}���ɮ�" << endl;
		fgRun = false;
	}

	while (fgRun)
	{
		cout << "\n��J�ӫ~�W��(��J-1����)�G";
		cin >> product.name;
		if (strcmp(product.name, "-1") == 0)
			fgRun = false;
		else
		{
			cout << "��J�����G";
			cin >> product.price;

			file.write((char*)& product, sizeof(_PRODUCT));
			if (!file.good())
			{
				cout << "�L�k�g�J���" << endl;
				fgRun = false;
			}
			else
				cout << "�w�s�W���" << endl;
		}
	}	

	file.close();
}

//-------- ��ܸ�� ----------------
void showData()
{
	fstream file;
	_PRODUCT product;
	int no = 1;

	cout << "\n---- ��ܸ�� ----" << endl;

	file.open("data", ios::binary | ios::in);
	if (!file.is_open())
		cout << "�L�k�}���ɮ�" << endl;
	else
	{
		while (file.read((char*)& product, sizeof(_PRODUCT)))		
			cout << no++ << ". �W�١G" << product.name <<\
			", �����G" << product.price << endl;
		file.close();		
	}
}

//-------- �d�߸�� ----------------
void queryData()
{
	fstream file;
	char name[20];
	_PRODUCT product;
	int no = 1;

	cout << "\n---- �d�߸�� ----" << endl;

	file.open("data", ios::binary | ios::in);
	if (!file.is_open())
	{
		cout << "�L�k�}���ɮ�" << endl;
		return;
	}

	cout << "\n��J���d�߲ĴX�����: ";
	cin >> no;
	if (no < 1)
		cout << "��J���~\n";
	else
	{
		file.seekg((no - 1) * sizeof(_PRODUCT), ios::beg);
		
		file.read((char*)& product, sizeof(_PRODUCT));
		if(!file.fail())
			cout << no << ". �W�١G" << product.name << \
				", �����G" << product.price << endl;
		else
			cout << "�W�L�d��\n";
	}
	
	file.close();
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

			case 2: showData();
				break;

			case 3: queryData();
				break;

			case 4: exit(0);
				break;

			default: cout << "��J���~�A";
				break;
		}
		cout << "�����~��...";
		while (!_kbhit());
	}
	
	system("pause");
}
