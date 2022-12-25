#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int total = 0; //點餐總金額
	char select; //點餐編號
	bool fg = true; //無窮迴圈執行旗標
	
	while (fg)
	{
		//----------- 顯示餐點選項 ----------------------		
		cout << "\n1.   綜合果汁  80\n2.   拿鐵咖啡 120\n3.   水果拼盤  85\n"; 		
		cout << "4.   手工餅乾  75\n5.   下午茶組合 300\n6.   程式結束\n";
		cout << "=================\n輸入編號：";		

		try
		{
			select = getchar();

			cin.ignore(80, '\n');

			if (!isdigit(select))	//非輸入數字
				throw "請輸入數字。\n";

			if (select < '1' || select>'6')  //輸入超過範圍
				throw "輸入錯誤，重新輸入。\n";

			switch (select)  //計算餐點金額
			{
			case '1': total += 80;
				break;
			case '2': total += 120;
				break;
			case '3': total += 85;
				break;
			case '4': total += 75;
				break;
			case '5': total += 300;
				break;
			case '6': fg = false;
				break;
			}

			if (select != '6')	  //不是選擇結束程式才需要擲出擲回物件
				throw total;
		}
		catch (char const* str)
		{
			cout << str << endl;
		}
		catch (int e)
		{
		    cout << "一共 " << total << "元" << endl;

			if (e < 250)
				cout << "還差 " << 250 - e << " 元才達最低消費" << endl;
			else
			{
				cout << "已達最低消費" << endl;
				fg = false;
			}
		}
	}

	system("pause");
}
