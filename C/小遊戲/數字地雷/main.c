#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char** argv)
{
	char ch;
	printf("A �}�l�C��\n");
	printf("B ���}�C��\n");
	printf("�O�_�}�l�C��:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
			fun1();
		case 'B':
		case 'b':
			printf("Exit...");
			break;
		case 'o':
		case 'O':
			login();
	}
}
void fun1()/*�D�{��*/
{
	int mysteryNumber = 0, guessNumber = 0;
    const int MAX = 1000, MIN = -1000;
    // �H���ͦ��a�p 
    srand(time(NULL));
    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
    /* �����Ʀr�a�p�A�~��M�� */
    do
    {
        // �ШD���a��J�q�� 
        printf("�Ʀr�a�p���Ʀr�O:");
        scanf("%d", &guessNumber);
        // ������a�q�ƩM�a�p 
        if (mysteryNumber > guessNumber)
            printf("%d �q�p�F !\n\n",guessNumber);
        else if (mysteryNumber < guessNumber)
            printf("%d �q�j�F !\n\n",guessNumber);
        else
            printf ("�ӴΤF�A�A�q��F�Ʀr�a�p !!\n\n");
    } while (guessNumber != mysteryNumber);
    return 0;
}/*��ƪ��D�餺�e*/
void login()
{
	system("cls");/*�M���e��*/
	int eadminname,eadminpass;
	char adminname[5]="admin";
	char adminpass[5]="admin";
	printf("��J�b��:");
	scanf("%s",&eadminname);
	eadminname == adminname;
	printf("��J�K�X:");
	scanf("%s",&eadminpass);
	char pess[5] = "eadminpass";
	eadminpass == adminpass;
	user();
}
void user()
{
	system("cls");
	printf("�K�X�T�{\n�w��Admin�i�J��x\n");
}
