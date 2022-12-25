#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;

string movies[] = { "靈異前哨站","歡樂時光","地球防衛線" };
string ticketType[] = { "一般票","優待票","團體票" };
string times[] = { "08:30","14:00","16:00","18:00","20:00" };

struct _Ticket
{
	string type;  //電影票的總類
	string movie; //電影名稱
	string time;  //時間
};

using TICKET = _Ticket;
bool fgOrder;  //是否已經完成訂票

//---------------------------------------
void showMenu()
{
	system("cls");
	cout << "1. 購票" << endl;
	cout << "2. 列印電影票" << endl;
	cout << "3. 結束" << endl;
	cout << "輸入選擇(1-3): ";
}

//----------------------------------------
void printTicket(TICKET ticket)
{
	system("cls");
	if (!fgOrder)
	{
		cout << "尚未訂票";
		return;
	}
	
	cout << "[[  強強電影院  ]]" << endl;
	cout << "電影：" << ticket.movie << endl;
	cout << "票種：" << ticket.type << endl;
	cout << "場次：" << ticket.time << endl;
}

//----------------------------------------
void orderTicket(TICKET *ticket)
{
	int sel;
	char yn;

	system("cls");
	fgOrder = false; //訂票尚未完成
	cout << "---- 購票 ----" << endl;

	cout<<"輸入電影編號：\r\n(1)靈異前哨站 (2)歡樂時光 (3)地球防衛線：";
	cin >> sel;
	if (sel < 1 || sel>3)
	{
		cout << "輸入錯誤";
		return;
	}
	ticket->movie = movies[sel-1];

	cout<<"輸入票種的編號：\r\n(1)一般票 (2)優待票 (3)團體票：";
	cin >> sel;
	if (sel < 1 || sel>3)
	{
		cout << "輸入錯誤";
		return;
	}
	ticket->type = ticketType[sel-1];

	cout << "輸入場次的編號:\r\n(1)08:30 (2)14:00 (3)16:00 (4)18:00 (5)20:00：";
	cin >> sel;
	if (sel < 1 || sel>5)
	{
		cout << "輸入錯誤";
		return;
	}
	ticket->time = times[sel - 1];

	cout << "確定訂票資訊？(Y/N)：";
	cin >> yn;
	if (yn == 'y' || yn=='Y')
		fgOrder = true;
}

int main()
{
	int sel;
	TICKET mTicket;

	while (true)
	{
		showMenu();
		cin >> sel;

		switch (sel)
		{
		case 1:
			orderTicket(&mTicket);
			break;

		case 2:
			printTicket(mTicket);
			break;

		case 3: exit(0);
			break;

		default:
			cout << "輸入錯誤，";
			break;
		}

		cout << "按鍵繼續...";
		while (!_kbhit());
	}

	system("pause");
}