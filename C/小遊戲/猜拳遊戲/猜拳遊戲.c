//�w�[�� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//�����r����C�� 
void color(short x)
{
    if (x >= 0 && x <= 15)//�ѼƦb0-15���d���C�� 
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//�u���@�ӰѼơA���ܦr���C�� 
    else//�q�{�զ�
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

int main()
{
	system("title �q���C��");
    char gamer; // ���a�X��
    int computer; // �q���X��
    int result; // ���ɵ��G

    // ���F�קK���@���C���N�h�X�{�ǡA�i�H�N�N�X��b�`����
    while (1){
        color(10);
		printf("�o�O�@�Ӳq�����p�C���A�п�J�A�n�X�����Y�G\n");
        color(6);printf("A:�ŤM\nB:���Y\nC:��\nD:�����F\n");color(7);
        scanf("%c%*c",&gamer);
        switch (gamer){
            case 'A':
            case 'a':
                gamer=4;
                break;
            case 'B':
            case 'b':
                gamer=7;
                break;
            case 'C':
            case 'c':
                gamer=10;
                break;
            case 'D':
            case 'd':
                return 0;
          
            default:
                printf("�A����ܬ�%c ��ܿ��~,�h�X...\n",gamer);
                getchar();
                system("cls"); // �M��
                return 0;
                break;
        }
      
        srand((unsigned)time(NULL)); // �H���ƺؤl
        computer=rand()%3; // �����H���ƨè��l�A�o��q���X��
        result=(int)gamer+computer; // gamer ��char �����A�ƾǹB��ɭn�j���ഫ����
        printf("�q���X�F");
        switch (computer)
        {
            case 0:printf("�ŤM\n");break; //4 1
            case 1:printf("���Y\n");break; //7 2
            case 2:printf("��\n");break; //10 3
        }
        printf("�A�X�F");
        switch (gamer)
        {
            case 4:printf("�ŤM\n");break;
            case 7:printf("���Y\n");break;
            case 10:printf("��\n");break;
        }
        if (result==6||result==7||result==11) printf("�AĹ�F!");
        else if (result==5||result==9||result==10) printf("�q��Ĺ�F!");
        else printf("����");
        system("pause>nul&&cls"); // �Ȱ��òM��
    }
    return 0;
}
