#include <iostream>
#include <conio.h>
#include <direct.h>
#include <io.h>
#include<string.h>
using namespace std;

//--------- 顯示工作路徑 ---------
void showCurrPath() 
{
	char* ptrPath;

	ptrPath = _getcwd(NULL, 0);
	cout << "\n\n現在的工作路徑：" << endl;
	cout << ptrPath << endl;
}

//--------- 顯示選單 ------------
void showMenu()  
{	
	cout << endl;
	cout << "1. 往上一層目錄" << endl;
	cout << "2. 顯示所有的檔案" << endl;
	cout << "3. 變更目錄" << endl;
	cout << "4. 顯示檔案資訊" << endl;
	cout << "5. 結束" << endl;
	cout << "輸入選擇(1-5): ";
}

//------- 顯示錯誤代號與訊息 -----
void showError() 
{
	errno_t err;
	char errmsg[100];

	_get_errno(&err);
	strcpy(errmsg,"錯誤內容");
	cout << "錯誤代號：" << err << endl;
	cout << errmsg << endl;
}

//--------- 改變目錄 ------------
void chgDir()  
{
	string str;

	cout << "輸入目錄：";
	cin >> str;

	if (_chdir(str.c_str()) == -1)
		showError();
}

//--------- 顯示檔案大小 ------------
void showFileInfo()
{
	intptr_t hdFile = 0;
	struct _finddata_t info;
	string str;

	cout << "輸入檔案名稱：";
	cin >> str;

	if ((hdFile = _findfirst(str.c_str(), &info)) == -1)
		cout << "沒有此檔案" << endl;
	else
	{
		if (info.attrib != _A_SUBDIR)
			cout << "檔案大小：" << info.size << endl;
	}
	_findclose(hdFile);
}

int main()
{
	int sel;

	while (true)
	{
		showCurrPath();  // 顯示工作路徑
		showMenu();      // 顯示選單
		cin >> sel;

		switch (sel)
		{
			case 1:
				if (_chdir("..") == -1)  //往上一層目錄
					showError();
				break;

			case 2: system("dir");       //顯示所有檔案
				break;

			case 3: chgDir();            //改變目錄
				break;

			case 4: showFileInfo();      //顯示檔案大小
				break;

			case 5: exit(0);
				break;

			default:
				cout << "輸入錯誤，";
				break;
		}

		cout << "按鍵繼續...";
		while (!_kbhit());
	}	

	system("pause");
}
