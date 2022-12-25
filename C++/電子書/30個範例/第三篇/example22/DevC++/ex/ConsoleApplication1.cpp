#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;

string movies[] = { "�F���e�ﯸ","�w�֮ɥ�","�a�y���ýu" };
string ticketType[] = { "�@�벼","�u�ݲ�","���鲼" };
string times[] = { "08:30","14:00","16:00","18:00","20:00" };

struct _Ticket
{
	string type;  //�q�v�����`��
	string movie; //�q�v�W��
	string time;  //�ɶ�
};

using TICKET = _Ticket;
bool fgOrder;  //�O�_�w�g�����q��

//---------------------------------------
void showMenu()
{
	system("cls");
	cout << "1. �ʲ�" << endl;
	cout << "2. �C�L�q�v��" << endl;
	cout << "3. ����" << endl;
	cout << "��J���(1-3): ";
}

//----------------------------------------
void printTicket(TICKET ticket)
{
	system("cls");
	if (!fgOrder)
	{
		cout << "�|���q��";
		return;
	}
	
	cout << "[[  �j�j�q�v�|  ]]" << endl;
	cout << "�q�v�G" << ticket.movie << endl;
	cout << "���ءG" << ticket.type << endl;
	cout << "�����G" << ticket.time << endl;
}

//----------------------------------------
void orderTicket(TICKET *ticket)
{
	int sel;
	char yn;

	system("cls");
	fgOrder = false; //�q���|������
	cout << "---- �ʲ� ----" << endl;

	cout<<"��J�q�v�s���G\r\n(1)�F���e�ﯸ (2)�w�֮ɥ� (3)�a�y���ýu�G";
	cin >> sel;
	if (sel < 1 || sel>3)
	{
		cout << "��J���~";
		return;
	}
	ticket->movie = movies[sel-1];

	cout<<"��J���ت��s���G\r\n(1)�@�벼 (2)�u�ݲ� (3)���鲼�G";
	cin >> sel;
	if (sel < 1 || sel>3)
	{
		cout << "��J���~";
		return;
	}
	ticket->type = ticketType[sel-1];

	cout << "��J�������s��:\r\n(1)08:30 (2)14:00 (3)16:00 (4)18:00 (5)20:00�G";
	cin >> sel;
	if (sel < 1 || sel>5)
	{
		cout << "��J���~";
		return;
	}
	ticket->time = times[sel - 1];

	cout << "�T�w�q����T�H(Y/N)�G";
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
			cout << "��J���~�A";
			break;
		}

		cout << "�����~��...";
		while (!_kbhit());
	}

	system("pause");
}