#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(vold)
{
	char m='a';
	int gamer;
	system("title �C�����");
	do{
		printf("#\t�C�����\t#\n");
		printf("#########################\n");
        printf("#\tA:�Xù�����\t#\n#\tB:�q���C��\t#\n#\tC:�Ʀr�a�p\t#\n#\tD:�����F\t#\n");
        printf("#########################\n");
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
