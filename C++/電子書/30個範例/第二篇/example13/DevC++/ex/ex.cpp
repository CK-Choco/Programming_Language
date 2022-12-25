#include <iostream>
#include <array>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
	array<int, 5>arr1;
	array<int, 5>arr2 = { 1,2,3,4,5 };
	array<array<int, 5>, 2>arr3;

	srand((unsigned)time(NULL));

	for (int i = 0; i < arr1.size(); i++)
		arr1[i] = rand() % 11 + 10;

	for (auto item : arr1)
		cout << setw(4) << item;
	cout << endl << endl;

	//-------------------------------------------
	for (int i = 0; i < arr3[0].size(); i++)
		arr3[0][i] = rand() % 11 + 20;

	arr3[1] = arr2;

	for (auto& row : arr3)
	{
		for (auto col : row)
			cout << setw(4) << col;
		cout << endl;
	}

	system("pause");
}
