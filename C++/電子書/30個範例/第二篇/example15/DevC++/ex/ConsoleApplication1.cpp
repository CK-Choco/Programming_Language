#include <iostream>
#include <conio.h>
using namespace std;

#define STUD_NUM 5 //�ǥ��`�H��

int main()
{
	int lastID = 10903; //�̫�@�ӾǸ�
	int studID[STUD_NUM] = { 10901,10902,lastID }; //�Ǹ�
    string studName[STUD_NUM] = { "���p��","���p�j","�u���R" };  //�m�W
    int studScore[STUD_NUM] = { 90,67,88 };  //���Z
    int select; // ��ܭ����ާ@
    int studNum = 3; //�w�g���F3���ǥ͸��
    int ID; //��J���Ǹ�	
	int score; //��J���ǥͤ���
	string name; //��J���ǥͩm�W
	int No; //���J�ǥ͸�ƪ���m
	int fg;  //�Ω�P�_�ާ@�O�_���\

    while (true)
    {      
        //------ ��ܿ�� --------------
		system("cls");
        cout << "1. �ק���" << endl;
        cout << "2. �R�����" << endl;
        cout << "3. �d�߸��" << endl;
        cout << "4. ���J���" << endl;
        cout << "5. �ƧǸ��" << endl;
        cout << "6. ��ܸ��" << endl;
        cout << "7. ����\r\n" << endl;
        cout << "��J���(1-7)�G";
        cin >> select;
        cin.ignore(80, '\n');

        if (select < 1 || select>7)
        {
            cout << "��J���~�A���������~��...";
            while (!_kbhit());
            continue;
        }

        //----- �B�z�U�ؾާ@ -------
        system("cls");
        switch (select)
        {
            case 1: 
                cout << "==== �ק��� ====" << endl;
                cout << "��J�ק�ǥͪ��Ǹ��G";
                cin >> ID;
				fg = false;  //��ܸ�Ʃ|���ק�
				for (int i = 0; i < studNum; i++)
					if (studID[i] == ID) //�����R�����ǥ;Ǹ�
					{
						cout << "��J�m�W�P���ơG";
						cin >> studName[i] >> studScore[i];
						fg = true; //��ܸ�Ƥw�ק�
						break;
					}

				if (fg)
					cout << "�ק令�\�A";
				else
					cout << "��J���~�A";                                         
                break;

            case 2:
                cout << "==== �R����� ====" << endl;				
				cout << "��J���R���ǥͪ��Ǹ��G";
				cin >> ID;
				
				fg = false;  //��ܸ�Ʃ|���R��
				for(int i=0;i<studNum;i++)
					if (studID[i] == ID) //�����ק�ǥͪ��Ǹ�
					{												
						for (int j = i; j < studNum - 1; j++)
						{
							studID[j] = studID[j + 1];
							studName[j] = studName[j + 1];
							studScore[j] = studScore[j + 1];
						}
					
						studNum--; //�}�C�����ƶq��1
						fg = true; //��ܸ�Ƥw�R��
						break;
				    }					
				    
				if(fg)
					cout << "�R�����\�A";
				else
					cout << "��J���~�A";			
                break;

            case 3:
                cout << "==== �d�߸�� ====" << endl;
				cout << "��J�d�߾ǥͪ��Ǹ��G";
				cin >> ID;

				fg = false;  //��ܸ�Ʃ|�����
				for (int i = 0; i < studNum; i++)
					if (studID[i] == ID) //�����d�߾ǥͪ��Ǹ�
					{
						cout << "�Ǹ��G" << studID[i] << "�A ";
						cout << "�m�W�G" << studName[i] << "�A ";
						cout << "���ơG" << studScore[i] << endl;
						fg = true; //��ܸ�Ƥw���
						break;
					}

				if (!fg)
					cout << "��J���~�A";					
                break;

            case 4:
                cout << "==== ���J��� ====" << endl;
				//---- �P�_�}�C�Ŷ��O�_�w�� --------------
				if (studNum + 1 > STUD_NUM)
				{
					cout << "�Ŷ��w���A";
					break;
				}
				//------ ��J���J��ƪ���m ------------
				cout << "��J�����J�b���Ӧ�m����(0-" << studNum << ")�G";
				cin >> No;
				if (No < 0 || No > studNum)
				{
					cout << "��J���~�A";
					break;
				}
				//------ ��J��� ---------------
				cout << "��J�m�W�P���ơG";
				cin >> name >> score;
				cin.ignore(80, '\n');

				//----- �}�l�h������ ----------		 
				for (int i = studNum; i > No; i--)
				{
					studID[i] = studID[i - 1];
					studName[i] = studName[i - 1];
					studScore[i] = studScore[i - 1];
				}

				lastID++; //�Ǹ��[1
				studID[No] = lastID; //�g�J�Ǹ�
				studName[No] = name; //�g�J�m�W
				studScore[No] = score; //�g�J����
				studNum++;	 //�����ƶq�[1
				cout << "��ƴ��J���\�A";
                break;

            case 5:
                cout << "==== �ƧǸ�� ====" << endl;
				for (int i = 0; i < studNum; i++)
				{
					for (int j = studNum; j >= i + 1; j--)
					{
						if (studScore[j - 1] < studScore[j])
						{
							swap(studScore[j - 1], studScore[j]);
							swap(studName[j - 1], studName[j]);
							swap(studID[j - 1], studID[j]);
						}
					}
				}
				cout << "��ƱƧǧ����A";
                break;

            case 6:
                cout << "==== ��ܸ�� ====" << endl;
                for (int i = 0; i < studNum; i++)
                {
                    cout << "�Ǹ��G" << studID[i] << "�A ";
                    cout << "�m�W�G" << studName[i] << "�A ";
                    cout << "���ơG" << studScore[i] << endl;
                }
                break;

            case 7:
                exit(0);              
        }  //end of weitch  
       
        cout << "���������~��...";
        while (!_kbhit());
		cin.ignore(80, '\n');
    }  //end of while

    system("pause");
}
 