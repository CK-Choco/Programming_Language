#include <iostream>
#include <conio.h>
#include <direct.h>
#include <io.h>
#include<string.h>
using namespace std;

//--------- ��ܤu�@���| ---------
void showCurrPath() 
{
	char* ptrPath;

	ptrPath = _getcwd(NULL, 0);
	cout << "\n\n�{�b���u�@���|�G" << endl;
	cout << ptrPath << endl;
}

//--------- ��ܿ�� ------------
void showMenu()  
{	
	cout << endl;
	cout << "1. ���W�@�h�ؿ�" << endl;
	cout << "2. ��ܩҦ����ɮ�" << endl;
	cout << "3. �ܧ�ؿ�" << endl;
	cout << "4. ����ɮ׸�T" << endl;
	cout << "5. ����" << endl;
	cout << "��J���(1-5): ";
}

//------- ��ܿ��~�N���P�T�� -----
void showError() 
{
	errno_t err;
	char errmsg[100];

	_get_errno(&err);
	strcpy(errmsg,"���~���e");
	cout << "���~�N���G" << err << endl;
	cout << errmsg << endl;
}

//--------- ���ܥؿ� ------------
void chgDir()  
{
	string str;

	cout << "��J�ؿ��G";
	cin >> str;

	if (_chdir(str.c_str()) == -1)
		showError();
}

//--------- ����ɮפj�p ------------
void showFileInfo()
{
	intptr_t hdFile = 0;
	struct _finddata_t info;
	string str;

	cout << "��J�ɮצW�١G";
	cin >> str;

	if ((hdFile = _findfirst(str.c_str(), &info)) == -1)
		cout << "�S�����ɮ�" << endl;
	else
	{
		if (info.attrib != _A_SUBDIR)
			cout << "�ɮפj�p�G" << info.size << endl;
	}
	_findclose(hdFile);
}

int main()
{
	int sel;

	while (true)
	{
		showCurrPath();  // ��ܤu�@���|
		showMenu();      // ��ܿ��
		cin >> sel;

		switch (sel)
		{
			case 1:
				if (_chdir("..") == -1)  //���W�@�h�ؿ�
					showError();
				break;

			case 2: system("dir");       //��ܩҦ��ɮ�
				break;

			case 3: chgDir();            //���ܥؿ�
				break;

			case 4: showFileInfo();      //����ɮפj�p
				break;

			case 5: exit(0);
				break;

			default:
				cout << "��J���~�A";
				break;
		}

		cout << "�����~��...";
		while (!_kbhit());
	}	

	system("pause");
}
