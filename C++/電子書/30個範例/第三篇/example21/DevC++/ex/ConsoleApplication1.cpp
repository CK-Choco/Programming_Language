#include <iostream>
using namespace std;

enum COLOR { Blue=1, Yellow, White };

int main()
{
	int sel,num,total=0;

	cout << "��J��A���C��G(1)�Ŧ� (2)���� (3)�զ�G";
	cin >> sel;

	cout << "�ʶR��ơG";
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

	cout << "�@�@ " << total << "��" << endl;
	system("pause");
}