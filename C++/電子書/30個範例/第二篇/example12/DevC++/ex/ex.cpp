#include <iostream>
#include <conio.h>
using namespace std;

#define SCHL_NUM 3  //3���j��
#define COFF_NUM 3  //3�ة@��
#define MONTH_NUM 2 //2�Ӥ�

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
		cout << "-------- �_��ն�@�� ----------\n";
		cout << "1. ��J���\n2. ��ܸ��\n3. �p�⥭��\n4. ����\n";
		cout << "��J�ﶵ�G";
		cin >> select;

		system("cls");
		//---------------------------------------------------
		switch (select)
		{
			case 1: //��J�@�ؾP��ƶq	
				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < COFF_NUM; j++)
					{
						coffee[i][0][j] = 0;
						coffee[i][1][j] = 0;
					}

				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < MONTH_NUM; j++)
					{
						cout << "��J" << strSch[i] << "��" << j + 7 <<
							"��@�ؾP��q\n�����B���K�P�d����թ@�ؾP��q�G";
						cin >> coffee[i][j][0] >> coffee[i][j][1] >>
							coffee[i][j][2];
					}
				break;

			case 2: //��ܩ@�ؾP��ƶq		
				for (int i = 0; i < SCHL_NUM; i++)
					for (int j = 0; j < MONTH_NUM; j++)
					{
						cout << strSch[i] << "��" << j + 7 <<
							"��@�ؾP��q\n�����B���K�P�d����թ@�ؾP��q�G";
						cout << coffee[i][j][0] << ", " << coffee[i][j][1]
							<< ", " << coffee[i][j][2] << endl;
					}
				break;

			case 3: //�p��@�إ����P��q
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
					cout << strSch[i] << "�լ����B���K�P�d����թ@��" <<
						"�����P��q�G";
					cout << avg[i][0] << ", " << avg[i][1] << ", " <<
						avg[i][2] << endl;
				}
				break;

			case 4:
				cout << "�����{��" << endl;
				fg = false;
				break;

			default:
				cout << "��J���~�A���s��J" << endl;
				break;
		}

		cout << "�����N���~��...";
		_getche();
	}

	system("pause");
}
