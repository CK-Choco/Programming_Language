/*
	範例2：此範例用於示範C++的判斷敘述if
*/
#include <iostream>
using namespace std;

int main()
{
	int age; //年齡

	system("cls");
	cout << "輸入年齡：";
	cin >> age;

	if (age < 0)
	{
		cout << "輸入錯誤" << endl;
		return 0; //結束程式
	}

	cout << "可以觀看的電影有：" << endl;

	if (age >= 18)
		cout << "限制級18+、 ";

	if (age >= 15)
		cout << "輔導級15+、 ";

	if (age >= 12)
		cout << "輔導級12+、 ";

	if (age >= 6)
		cout << "保護級、 ";

	cout << "普遍級 " << endl;

	system("pause");
}