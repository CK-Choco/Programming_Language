/* Dev C++ �ϥ� stoi()
1. �b�u��>�sĶ���ﶵ>�@��>�I�s�sĶ���ɥ[�J�H�U���R�O�G
-std=c++11
2. �u��>�sĶ���ﶵ>�sĶ�]�w>�{���X����>�y���з�(-std):
��ܡGIOS C++11 
*/ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int index;

	cout << "��J�l���N���G";
	cin >> str;
	index = stoi(str);

	switch (index)
	{
		case 2825:
			str = "���˶l��";
			break;

		case 11323:
			str = "���s�l��";
			break;

		case 11354:
			str = "��ڤE���l��";
			break;

		case 311555:
			str = "�Q�Ӷl��";
			break;

		default:
			str = "��J���~";
			break;
	}

	cout << str << endl;
	system("pause");
}
