#include <iostream>
#include <conio.h>
using namespace std;

#define NUM 3        //3����~��
#define MONTH_NUM 4  //4�Ӥ�

int main()
{
	int Jan[NUM], Feb[NUM], Mar[NUM], Apr[NUM];
	int total[NUM];
	float avg[MONTH_NUM];
	string month[MONTH_NUM] = { "�@��","�G��","�T��", "�|��" };
	bool fg = true;
	char select; //��J���ﶵ

	//---------- �ܼƪ�l�� ---------------
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
		//-------- ��� -----------
		cout << "===============================" << endl;
		cout << "1. ��J�~�Z\n2. ��ܷ~�Z\n3. �p��U�륭���~�Z\n";
		cout << "4. �p����~���U�۷~�Z�`�M\n5. ����\n";		
		cout << "��J���(1-5): ";
		cin >> select;
		cout << "===============================" << endl;

		switch (select)
		{
		case '1': // ��J1-4�몺�~�Z   
			for (int i = 0; i < NUM; i++)
			{
				cout << "�� " << i + 1 << " ����~����1-4�몺�~�Z�G";
				cin >> Jan[i] >> Feb[i] >> Mar[i] >> Apr[i];
			}
			break;

		case '2':  //��ܤT����~����1-4�몺�~�Z
			for (int i = 0; i < NUM; i++)
			{
				cout << "��" << i + 1 << "����~���G�@��" << Jan[i] <<
					", �G��" << Feb[i] << ", �T��" << Mar[i] <<
					", �|��" << Apr[i] << endl;
			}
			break;

		case '3':  //�p��C�Ӥ몺�����~�Z				
			for (int i = 0; i < NUM; i++)
			{
				avg[0] += Jan[i];  //�֭p�@�몺�~�Z�`�M
				avg[1] += Feb[i];  //�֭p�G�몺�~�Z�`�M
				avg[2] += Mar[i];  //�֭p�T�몺�~�Z�`�M
				avg[3] += Apr[i];  //�֭p�|�몺�~�Z�`�M
			}

			for (int i = 0; i < MONTH_NUM; i++)
			{
				avg[i] /= (float)NUM;  //�p��U�몺�����~�Z	
				cout << month[i] << "�������~�Z�G" << avg[i] << endl;
			}
			break;

		case '4':  //�έp�C����~�����~�Z�`�M
			for (int i = 0; i < NUM; i++)
			{
				total[i] = Jan[i] + Feb[i] + Mar[i] + Apr[i];
				cout << "��" << i + 1 << "����~���~�Z�`�M�G" <<
					total[i] << endl;
			}
			break;

		case '5':
			cout << "�����{��" << endl;
			fg = false;
			break;

		default:
			cout << "��J���~�A���s��J" << endl;
			break;
		}  //end of switch

		cout << "�����N���~��" << endl;
		_getche();
		system("cls");
	}  //end of while

	system("pause");
}
