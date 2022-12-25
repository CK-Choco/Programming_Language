#pragma warning(disable : 4996)
#include <iostream>
#include <fstream>
#include <direct.h>
#include<conio.h>
#include <io.h>
using namespace::std;

#define MAX_NUM 5  //最大資料筆數

struct _STUDENT    //學生資料
{
	char name[20];
	int age;	
}student[MAX_NUM];

int stutNum = 0;   //目前資料的筆數

//---- 設定執行程式的路徑為工作路徑 -------
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

//------- 新增資料 --------------
void addData()
{
	fstream file;
	_STUDENT stut;

	if (stutNum >= MAX_NUM)
	{
		cout << "已達資料上限" << endl;
		return;
	}

	//--------- 輸入資料 -----------
	cout << endl;
	cout << "輸入姓名(輸入-1結束)：";
	cin >> stut.name;
	if (strcmp(stut.name, "-1")==0)
	{
		cout << "結束輸入，";
		return;
	}

	cout << "輸入年齡：";
	cin >> stut.age;

	//--------- 寫入資料 ------------
	file.open("doc.txt", ios::out | ios::app);
	if (!file.is_open())	
		cout << "無法開啟檔案" << endl;
	else
	{
		file.write((char*)& stut, sizeof(stut));
		if (file.fail())
			cout << "資料寫入失敗" << endl;
		else
		{
			cout << "資料寫入OK" << endl;
			stutNum++;  //資料筆數增加1筆
		}
		file.close();
	}
}

//-------- 讀取資料 -----------------
void readData()
{
	fstream file;	

	if (_access("doc.txt",0)!=-1) //判斷檔案是否存在
	{
		file.open("doc.txt", ios::in);  //開啟檔案
		if (!file.is_open())
			cout << "無法開啟檔案" << endl;
		else
		{
			stutNum = 0;  //資料筆數先設定為0
			while(!file.eof())
			{			
				file.read((char*)& student[stutNum], sizeof(_STUDENT));			
				if (file.fail())
					break;
				
				stutNum++; //資料筆數累加1筆
			}
			file.close();
		}
	}	
}

//---------------------------------------
void showData()
{
	if (stutNum == 0)
		cout << "無資料" << endl;
	else
		for (int i = 0; i < stutNum; i++)
		{	
			cout << endl;
			cout << "姓名 = " << student[i].name << endl;
			cout << "年齡 = " << student[i].age << endl;
		}
}

//-------- 顯示選單 -----------------
void showMenu()
{
	system("cls");
	cout << "1. 新增資料" << endl;
	cout << "2. 顯示資料" << endl;
	cout << "3. 結束" << endl;
	cout << "輸入選擇(1-3): ";
}

//------------------------------------
int main()
{	
	string strPath;
	int sel;

	if (!setExePath(strPath))
	{
		cout << "無法切換工作路徑" << endl;
		exit(0);
	}

	readData(); //讀取資料

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

			default: cout << "輸入錯誤，";
				break;
		}
		cout << "按鍵繼續...";
		while (!_kbhit());
	}
	
	system("pause");
}
