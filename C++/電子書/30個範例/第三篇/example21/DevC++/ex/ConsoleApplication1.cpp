#include <iostream>
using namespace std;

enum COLOR { Blue=1, Yellow, White };

int main()
{
	int sel,num,total=0;

	cout << "輸入衣服的顏色：(1)藍色 (2)黃色 (3)白色：";
	cin >> sel;

	cout << "購買件數：";
	cin >> num;

	switch (sel)
	{
		case Blue:
			total = num * 330;
			break;

		case Yellow:
			total = num * 300;
			break;

		case White:
			total = num * 280;
			break;
	}

	cout << "一共 " << total << "元" << endl;
	system("pause");
}