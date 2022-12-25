#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE  hConsole;
	COORD point; //設定游標位置

	//取得Console視窗的handle
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int color = 0; color < 16; color++) //顏色變化從1-15
	{
		for (int y = 10; y < 15; y++) //顯示三列的空白字串
		{
			SetConsoleTextAttribute(hConsole, color + (color << 4));
			point.X = 20;
			point.Y = y;
			SetConsoleCursorPosition(hConsole, point);
			cout << "        " << endl;
		}

		Sleep(300); //暫停0.3秒
	}

	SetConsoleTextAttribute(hConsole, 15);
	system("pause");
}
