#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//�����r����C�� 
void color(short x){
    if (x >= 0 && x <= 15)//�ѼƦb0-15���d���C�� 
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//�u���@�ӰѼơA���ܦr���C�� 
    else//�q�{�զ�
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);}
int main(vold)
{
	char m='a';
	int gamer;
	system("title �C�����");
	do{
		color(10);printf("�x\t�C�����\t�x\n");
		color(8);printf("�u�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�t\n");
        color(6);printf("�x\tA:�Xù�����\t�x\n�x\tB:�q���C��\t�x\n�x\tC:�Ʀr�a�p\t�x\n�x\tD:�����F\t�x\n");
        color(8);printf("�|�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�w�}\n");color(7);
		scanf("%c%*c",&gamer);
        switch (gamer)
		{
			case 'A':
            case 'a':
                system("cls");
                system("cd ./�Xù�����/&start �p�C��.exe&exit");
                break;
            case 'B':
            case 'b':
                system("cls");
                system("cd ./�q���C��/&start �q���C��.exe&exit");
                break;
            case 'C':
            case 'c':
            	system("cls");
                system("cd ./�Ʀr�a�p/&start main.exe&exit");
                break;
            case 'D':
            case 'd':
            	system("timeout /t 5");//�˼ƭp�ɡA���@����L 
                return 0;
            default:
                printf("�A����ܬ�%c ��ܿ��~,�h�X...\n",gamer);
                getchar();
                system("cls"); // �M��
                return 0;
                break;
		}
	}while(!m);
	return 0;
}
