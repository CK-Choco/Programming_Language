#include <iostream>
#include <conio.h>
using namespace std;

#define NUM 3        //3位營業員
#define MONTH_NUM 4  //4個月

int main()
{
	int Jan[NUM], Feb[NUM], Mar[NUM], Apr[NUM];
	int total[NUM];
	float avg[MONTH_NUM];
	string month[MONTH_NUM] = { "一月","二月","三月", "四月" };
	bool fg = true;
	char select; //輸入的選項

	//---------- 變數初始化 ---------------
	for (int i = 0; i < MONTH_NUM; i++)
		avg[i] = 0;

	for (int i = 0; i < NUM; i++)
	{
		Jan[i] = 0;
		Feb[i] = 0;
		Mar[i] = 0;
		Apr[i] = 0;
		total[i] = 0;
	}

	//--------------------------------
	while (fg)
	{
		//-------- 選單 -----------
		cout << "===============================" << endl;
		cout << "1. 輸入業績\n2. 顯示業績\n3. 計算各月平均業績\n";
		cout << "4. 計算營業員各自業績總和\n5. 結束\n";		
		cout << "輸入選擇(1-5): ";
		cin >> select;
		cout << "===============================" << endl;

		switch (select)
		{
		case '1': // 輸入1-4月的業績   
			for (int i = 0; i < NUM; i++)
			{
				cout << "第 " << i + 1 << " 位營業員的1-4月的業績：";
				cin >> Jan[i] >> Feb[i] >> Mar[i] >> Apr[i];
			}
			break;

		case '2':  //顯示三位營業員的1-4月的業績
			for (int i = 0; i < NUM; i++)
			{
				cout << "第" << i + 1 << "位營業員：一月" << Jan[i] <<
					", 二月" << Feb[i] << ", 三月" << Mar[i] <<
					", 四月" << Apr[i] << endl;
			}
			break;

		case '3':  //計算每個月的平均業績				
			for (int i = 0; i < NUM; i++)
			{
				avg[0] += Jan[i];  //累計一月的業績總和
				avg[1] += Feb[i];  //累計二月的業績總和
				avg[2] += Mar[i];  //累計三月的業績總和
				avg[3] += Apr[i];  //累計四月的業績總和
			}

			for (int i = 0; i < MONTH_NUM; i++)
			{
				avg[i] /= (float)NUM;  //計算各月的平均業績	
				cout << month[i] << "的平均業績：" << avg[i] << endl;
			}
			break;

		case '4':  //統計每個營業員的業績總和
			for (int i = 0; i < NUM; i++)
			{
				total[i] = Jan[i] + Feb[i] + Mar[i] + Apr[i];
				cout << "第" << i + 1 << "位營業員業績總和：" <<
					total[i] << endl;
			}
			break;

		case '5':
			cout << "結束程式" << endl;
			fg = false;
			break;

		default:
			cout << "輸入錯誤，重新輸入" << endl;
			break;
		}  //end of switch

		cout << "按任意鍵繼續" << endl;
		_getche();
		system("cls");
	}  //end of while

	system("pause");
}
