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

//-------- 顯示選單 -----------------
void showMenu()
{
	system("cls");
	cout << "1. 新增資料" << endl;
	cout << "2. 顯示資料" << endl;
	cout << "3. 查詢資料" << endl;
	cout << "4. 結束" << endl;
	cout << "輸入選擇(1-4): ";
}

//-------- 新增資料 ----------------
void addData()
{
	fstream file;
	_PRODUCT product;
	bool fgRun = true;

	cout << "\n---- 新增資料 ----";

	file.open("data", ios::binary | ios::out|ios::app);
	if (!file.is_open())
	{
		cout << "無法建立/開啟檔案" << endl;
		fgRun = false;
	}

	while (fgRun)
	{
		cout << "\n輸入商品名稱(輸入-1結束)：";
		cin >> product.name;
		if (strcmp(product.name, "-1") == 0)
			fgRun = false;
		else
		{
			cout << "輸入價錢：";
			cin >> product.price;

			file.write((char*)& product, sizeof(_PRODUCT));
			if (!file.good())
			{
				cout << "無法寫入資料" << endl;
				fgRun = false;
			}
			else
				cout << "已新增資料" << endl;
		}
	}	

	file.close();
}

//-------- 顯示資料 ----------------
void showData()
{
	fstream file;
	_PRODUCT product;
	int no = 1;

	cout << "\n---- 顯示資料 ----" << endl;

	file.open("data", ios::binary | ios::in);
	if (!file.is_open())
		cout << "無法開啟檔案" << endl;
	else
	{
		while (file.read((char*)& product, sizeof(_PRODUCT)))		
			cout << no++ << ". 名稱：" << product.name <<\
			", 價錢：" << product.price << endl;
		file.close();		
	}
}

//-------- 查詢資料 ----------------
void queryData()
{
	fstream file;
	char name[20];
	_PRODUCT product;
	int no = 1;

	cout << "\n---- 查詢資料 ----" << endl;

	file.open("data", ios::binary | ios::in);
	if (!file.is_open())
	{
		cout << "無法開啟檔案" << endl;
		return;
	}

	cout << "\n輸入欲查詢第幾筆資料: ";
	cin >> no;
	if (no < 1)
		cout << "輸入錯誤\n";
	else
	{
		file.seekg((no - 1) * sizeof(_PRODUCT), ios::beg);
		
		file.read((char*)& product, sizeof(_PRODUCT));
		if(!file.fail())
			cout << no << ". 名稱：" << product.name << \
				", 價錢：" << product.price << endl;
		else
			cout << "超過範圍\n";
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

			default: cout << "輸入錯誤，";
				break;
		}
		cout << "按鍵繼續...";
		while (!_kbhit());
	}
	
	system("pause");
}
