#include <iostream>
#include <conio.h>
using namespace std;

#define SCHL_NUM 3  //3間大學
#define COFF_NUM 3  //3種咖啡
#define MONTH_NUM 2 //2個月

int main()
{
	int coffee[SCHL_NUM][MONTH_NUM][COFF_NUM];
	float avg[SCHL_NUM][COFF_NUM];
	string strSch[3] = { "A","B","C" };
	bool fg = true;
	int select;

	while (fg)
	{
		system("cls");
		cout << "-------- 榕園校園咖啡 ----------\n";
		cout << "1. 輸入資料\n2. 顯示資料\n3. 計算平均\n4. 結束\n";
		cout << "輸入選項：";
		cin >> select;

		system("cls");
		//---------------------------------------------------
		switch (select)
		{
			case 1: //輸入咖啡銷售數量	
				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < COFF_NUM; j++)
					{
						coffee[i][0][j] = 0;
						coffee[i][1][j] = 0;
					}

				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < MONTH_NUM; j++)
					{
						cout << "輸入" << strSch[i] << "校" << j + 7 <<
							"月咖啡銷售量\n美式、拿鐵與卡布其諾咖啡銷售量：";
						cin >> coffee[i][j][0] >> coffee[i][j][1] >>
							coffee[i][j][2];
					}
				break;

			case 2: //顯示咖啡銷售數量		
				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < MONTH_NUM; j++)
					{
						cout << strSch[i] << "校" << j + 7 <<
							"月咖啡銷售量\n美式、拿鐵與卡布其諾咖啡銷售量：";
						cout << coffee[i][j][0] << ", " << coffee[i][j][1]
							<< ", " << coffee[i][j][2] << endl;
					}
				break;

			case 3: //計算咖啡平均銷售量
				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < COFF_NUM; j++)
						avg[i][j] = 0.0;

				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < COFF_NUM; j++)
					{
						avg[i][j] = coffee[i][0][j] + coffee[i][1][j];
						avg[i][j] /= 2.0;
					}

				for (int i = 0; i < SCHL_NUM; i++)
				{
					cout << strSch[i] << "校美式、拿鐵與卡布其諾咖啡" <<
						"平均銷售量：";
					cout << avg[i][0] << ", " << avg[i][1] << ", " <<
						avg[i][2] << endl;
				}
				break;

			case 4:
				cout << "結束程式" << endl;
				fg = false;
				break;

			default:
				cout << "輸入錯誤，重新輸入" << endl;
				break;
		}

		cout << "按任意鍵繼續...";
		_getche();
	}

	system("pause");
}
