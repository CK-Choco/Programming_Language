#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	COORD point;
	string str, strSpace = "";
	int len;

	cout << "��J�@�Ӧr��G";
	cin >> str;

	len = str.length(); //���X�r�ꪺ����
	for (int i = 0; i < len; i++) //�ϥΪťն񺡦r��strSpace
		strSpace += " ";

	system("cls");  //�M���ù�

	for (int posX = 5; posX <= 20; posX++)
	{
		point.X = posX;
		point.Y = 10; //��Ц�m
		// �]�w��Ъ���m
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
		cout << str; //��ܦr��

		Sleep(200); //�Ȱ�0.2��

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
		cout << strSpace;	//�M���r��
	}

	system("pause");
}
