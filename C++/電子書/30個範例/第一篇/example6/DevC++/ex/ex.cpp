#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	COORD point;
	string str, strSpace = "";
	int len;

	cout << "輸入一個字串：";
	cin >> str;

	len = str.length(); //取出字串的長度
	for (int i = 0; i < len; i++) //使用空白填滿字串strSpace
		strSpace += " ";

	system("cls");  //清除螢幕

	for (int posX = 5; posX <= 20; posX++)
	{
		point.X = posX;
		point.Y = 10; //游標位置
		// 設定游標的位置
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
		cout << str; //顯示字串

		Sleep(200); //暫停0.2秒

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
		cout << strSpace;	//清除字串
	}

	system("pause");
}
