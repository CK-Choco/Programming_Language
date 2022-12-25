#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;

struct _BOXEDMEAL
{
	char name[20];  //姓名
	char phone[20];  //電話
	bool veg; //true:素食 false:葷食
	bool porkChop; //true:排骨便當 false:雞腿便當
};

//-------- 顯示選單 -----------------
void showMenu()
{
	system("cls");
	cout << "1. 新增資料" << endl;
	cout << "2. 顯示資料" << endl;
	cout << "3. 結束" << endl;
	cout << "輸入選擇(1-3): ";
}

//------------- 寫入資料 --------------
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

//------------- 顯示資料 ----------------
void showData(_BOXEDMEAL meal)
{
	cout << "姓名：" << meal.name << endl;
	cout << "年齡：" << meal.phone << endl;
	if (meal.veg)
	    cout << "素食" << endl;	
	else
	{
		if (meal.porkChop)
			cout << "豬排便當" << endl;
		else
			cout << "雞腿便當" << endl;
	}
	cout << endl;
}

//------------- 讀取資料 ----------------------------
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
		cout << "----- 顯示資料 -----" << endl;
		while (file.read((char*)&meal, sizeof(_BOXEDMEAL)))
			showData(meal);

		file.close();
	}	

	return fg;
}

//------------- 填寫資料 ------------------
void  addData()
{
	_BOXEDMEAL meal;

	while (true)
	{
		cout << "\n輸入姓名(輸入-1結束輸入資料)：";
		cin >> meal.name;
		if (strcmp(meal.name, "-1")==0)
			return;

		cout << "輸入電話：";
		cin >> meal.phone;
		cout << "(0)葷食 (1)素食：";
		cin >> meal.veg;

		if (!meal.veg)
		{
			cout << "(0)雞腿便當 (1)排骨便當：";
			cin >> meal.porkChop;
		}

		if (!writeData(meal))
		{
			cout << "新增資料失敗" << endl;
			return;
		}
		else
			cout << "新增資料OK" << endl;	
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

			default: cout << "輸入錯誤，";
				break;
		}
		cout << "按鍵繼續...";
		while (!_kbhit());
	}
	
	system("pause");
}
