#pragma warning(disable : 4996)
#include <iostream>
#include <fstream>
#include <direct.h>
#include<conio.h>
#include <io.h>
using namespace::std;

#define MAX_NUM 5  //�̤j��Ƶ���

struct _STUDENT    //�ǥ͸��
{
	char name[20];
	int age;	
}student[MAX_NUM];

int stutNum = 0;   //�ثe��ƪ�����

//---- �]�w����{�������|���u�@���| -------
bool setExePath(string &strPath)
{
	string str;
	int pos;

	str = _pgmptr;
	pos = str.find_last_of('\\');
	if (pos == -1)
		strPath = str + "\\";
	else
		strPath = str.substr(0, pos + 1);
	
	if (_chdir(strPath.c_str()) == -1)
		return false;
	else
		return true;
}

//------- �s�W��� --------------
void addData()
{
	fstream file;
	_STUDENT stut;

	if (stutNum >= MAX_NUM)
	{
		cout << "�w�F��ƤW��" << endl;
		return;
	}

	//--------- ��J��� -----------
	cout << endl;
	cout << "��J�m�W(��J-1����)�G";
	cin >> stut.name;
	if (strcmp(stut.name, "-1")==0)
	{
		cout << "������J�A";
		return;
	}

	cout << "��J�~�֡G";
	cin >> stut.age;

	//--------- �g�J��� ------------
	file.open("doc.txt", ios::out | ios::app);
	if (!file.is_open())	
		cout << "�L�k�}���ɮ�" << endl;
	else
	{
		file.write((char*)& stut, sizeof(stut));
		if (file.fail())
			cout << "��Ƽg�J����" << endl;
		else
		{
			cout << "��Ƽg�JOK" << endl;
			stutNum++;  //��Ƶ��ƼW�[1��
		}
		file.close();
	}
}

//-------- Ū����� -----------------
void readData()
{
	fstream file;	

	if (_access("doc.txt",0)!=-1) //�P�_�ɮ׬O�_�s�b
	{
		file.open("doc.txt", ios::in);  //�}���ɮ�
		if (!file.is_open())
			cout << "�L�k�}���ɮ�" << endl;
		else
		{
			stutNum = 0;  //��Ƶ��ƥ��]�w��0
			while(!file.eof())
			{			
				file.read((char*)& student[stutNum], sizeof(_STUDENT));			
				if (file.fail())
					break;
				
				stutNum++; //��Ƶ��Ʋ֥[1��
			}
			file.close();
		}
	}	
}

//---------------------------------------
void showData()
{
	if (stutNum == 0)
		cout << "�L���" << endl;
	else
		for (int i = 0; i < stutNum; i++)
		{	
			cout << endl;
			cout << "�m�W = " << student[i].name << endl;
			cout << "�~�� = " << student[i].age << endl;
		}
}

//-------- ��ܿ�� -----------------
void showMenu()
{
	system("cls");
	cout << "1. �s�W���" << endl;
	cout << "2. ��ܸ��" << endl;
	cout << "3. ����" << endl;
	cout << "��J���(1-3): ";
}

//------------------------------------
int main()
{	
	string strPath;
	int sel;

	if (!setExePath(strPath))
	{
		cout << "�L�k�����u�@���|" << endl;
		exit(0);
	}

	readData(); //Ū�����

	while (true)
	{
		showMenu();
		cin >> sel;

		switch (sel)
		{
			case 1: addData();
				break;

			case 2: 
				readData();
				showData();
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
