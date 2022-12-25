#include <iostream>
#include <fstream>
using namespace std;

#define MAX_NUM 2  // �@�@2�����

struct _MYSTRUCT
{
	char name[20];  //�m�W
	int age;        //�~��
	float data[2];  //�����P�魫
};

//------------- ��g��� ----------------------------
void addData(_MYSTRUCT myStruct[])
{
	for (int i = 0; i < MAX_NUM; i++)
	{
		cout << "��J�m�W�G";
		cin >> myStruct[i].name;
		cout << "��J�~�֡G";
		cin >> myStruct[i].age;
		cout << "��J����(����)�P�魫(����)(�ϥΪťչj�})�G";
		cin >> myStruct[i].data[0] >> myStruct[i].data[1];
	}
}
//------------- �g�J��� ----------------------------
bool writeData(_MYSTRUCT myStruct[])
{
	fstream file;
	bool fg = true;

	cout << "----- �g�J��� -----" << endl;
	file.open("doc.data",ios::binary | ios::out);
	if (!file)
		fg = false;
	else
	{	
		file.write((char*)& myStruct[0], sizeof(_MYSTRUCT)*MAX_NUM);
		if(!file.good())			
			fg = false;	

		file.close();
	}
	return fg;
}
//------------- Ū����� ----------------------------
bool readData(_MYSTRUCT rStruct[])
{
	fstream file;
	bool fg = true;

	cout << "----- Ū����� -----" << endl;
	file.open("doc.data", ios::binary | ios::in);
	if (!file)
		fg = false;

	for (int i = 0; i < MAX_NUM; i++)
	{
		file.read((char*)& rStruct[i], sizeof(_MYSTRUCT));
		if (!file.good())
		{
			fg = false;
			break;
		}
	}

	file.close();
	return fg;
}

//------------- ��ܸ�� ----------------------------
void showData(_MYSTRUCT rStruct[])
{
	cout << "----- ��ܸ�� -----" << endl;
	for (int i = 0; i < MAX_NUM; i++)
	{
		cout << "�m�W�G" << rStruct[i].name << endl;
		cout << "�~�֡G" << rStruct[i].age << endl;
		cout << "�����G" << rStruct[i].data[0] << endl;
		cout << "�魫�G" << rStruct[i].data[1] << endl << endl;
	}
}

int main()
{
	_MYSTRUCT myStruct[MAX_NUM],rStruct[MAX_NUM];
	
	addData(myStruct);  //�s�W���
	
	if (!writeData(myStruct))  //�g�J���
		cout << "�g�J��ƿ��~" << endl;
	else
	{
		if (!readData(rStruct))  //Ū�����
			cout << "Ū����ƿ��~" << endl;
		else			
			showData(rStruct);  //��ܸ��
	}	

	system("pause");
}
