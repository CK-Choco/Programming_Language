#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE  hConsole;
	COORD point; //�]�w��Ц�m

	//���oConsole������handle
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int color = 0; color < 16; color++) //�C���ܤƱq1-15
	{
		for (int y = 10; y < 15; y++) //��ܤT�C���ťզr��
		{
			SetConsoleTextAttribute(hConsole, color + (color << 4));
			point.X = 20;
			point.Y = y;
			SetConsoleCursorPosition(hConsole, point);
			cout << "        " << endl;
		}

		Sleep(300); //�Ȱ�0.3��
	}

	SetConsoleTextAttribute(hConsole, 15);
	system("pause");
}
