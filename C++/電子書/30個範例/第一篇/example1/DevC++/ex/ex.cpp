/*
	範例1：此範例用於示範C++的基本輸入與輸出的方法
	注意：先停用4996警告。
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int noodle, soda, bread;  //泡麵、汽水、麵包
	float mNoodle, mSoda, mBread;//購買食品的費用
	float total; //應付金額

	noodle = 0;
	soda = 0;
	bread = 0;

	system("cls"); //清除螢幕
	printf("+============================+\n");
	printf("|  我家超商食品購買計算程式  |\n");
	printf("+============================+\n");

	printf("%s", "購買泡麵的數量：");
	scanf("%d", &noodle); //讀取購買泡麵的數量
	cout << "購買汽水與麵包的數量：";
	cin >> soda >> bread;  //讀取購買汽水與麵包的數量
	cout << endl;

	//應付金額
	mNoodle = noodle * 15;
	mSoda = soda * 20.3;
	mBread = bread * 18.2;
	total = mNoodle + mSoda + mBread;

	//顯示標題
	cout << setw(10) << left << "產品" << setw(10) << "單價"
		<< setw(10) << "數量" << setw(10) << right << "金額" << endl;
	cout << "----------------------------------------\n";

	//泡麵的購買資訊
	cout << setw(10) << left << "泡麵" << setw(10) << "15元"
		<< setw(10) << noodle << setw(10) << right << fixed
		<< setprecision(2) << mNoodle << endl;

	//汽水的購買資訊
	cout << setw(10) << left << "汽水" << setw(10) << "20.3元"
		<< setw(10) << soda << setw(10) << right << fixed
		<< setprecision(2) << mSoda << endl;

	//麵包的購買資訊
	cout << setw(10) << left << "麵包" << setw(10) << "18.2元"
		<< setw(10) << bread << setw(10) << right << fixed
		<< setprecision(2) << mBread << endl;

	//顯示應付金額
	cout << "----------------------------------------\n";
	cout << "應付：" << setw(34) << right << total << endl;

	system("pause");
}
