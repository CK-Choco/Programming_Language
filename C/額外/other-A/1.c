#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fun1(); //�ŧi��� 
void list();
int main(vold){
	int a;
	char b='Y&&y'; 
	char c='N&&n';
	char e='I&&i';
	while(1){
		system("cls");
		printf("Y:���� N:���� I:list\n");
		printf("�O�_����(Y/N/I):");
		scanf("%c",&a);
		if (a == b){
			printf("����T�{!\n");
			fun1();	//�I�s���	
		}
		if (a == c){
			printf("�������!\n");
			break;
		}
		if (a == e){
			list();
		}
	}
	return 0;
}
void list()
{
	printf("%%���᪺�r��");
	printf("\n");
	printf("  c |��X�r��");
	printf("\n");
	printf("  s |��X�r����");
	printf("\n");
	printf(" ld |��X�����");
	printf("\n");
	printf("  d |��X�Q�i����");
	printf("\n");
	printf("  u |��X���t�Ÿ����Q�i���ƭȡC");
	printf("\n");
	printf("  o |��X�K�i��ơC");
	printf("\n");
	printf("  x |��X�Q���i��ơA�W�L10���Ʀr�H�p�g�r����ܡC");
	printf("\n");
	printf("  X |��X�Q���i��ơA�W�L10���Ʀr�H�j�g�r����ܡC");
	printf("\n");
	printf("  f |��X�B�I�ơC");
	printf("\n");
	printf("  e |�ϥά�ǰO����ܪk�A�Ҧp3.14e+05(�ϥΤp�ge)�C");
	printf("\n");
	printf("  E |�ϥά�ǰO����ܪk�A�Ҧp3.14E+05(�ϥΤj�gE)�C");
	printf("\n");
	printf("g/G |��X�B�I�ơA���L�O��X%%e�P%%f���׸����u�̡C");
	printf("\n");
	printf("  p |��X���мƭȡA�̨t�Φ줸�ƨM�w��X�ƭȪ��סC");
	printf("\n");
	system("pause");
}
void fun1() //��� 
{
	int cnt;
	int hour = 0, min = 0, sec = 0;
	time_t time_sec = 0;
	time_t old_sec = 0;
	printf("�г]�w�p�ɮɶ��X�X�� �� ��\n");
	scanf("%d%d%d", &hour, &min, &sec);
	time(&time_sec);              //�����e��ơ]1970-1-1 00:00:00��{�b�^
	printf("�˭p�ɡX�X%02d:%02d:%02d\r", hour, min, sec);
	old_sec = time_sec;           //��s�ª����
	while(hour > 0 || min > 0 || sec > 0)
	{
	    time(&time_sec);          //�������x�s��time_t�ܼ�
	    if(time_sec != old_sec)   //�p�G��Ƨ��ܡ]�p�ɹF��1��^
	    {
	        old_sec = time_sec;   //��s�ª����
	        if(sec > 0)
	            sec--;            //�p�ɬ�ƴ�1
	        else
	        {
	            sec = 59;         //�p�G���Ƭ�0�A�h�ܬ�59
	            if(min > 0)
	                min--;        //�p�ɤ�����1
	            else
	            {
	                min = 59;     //�p�G�����Ƭ�0�A�h�ܬ�59
	                hour--;       //�p�ɤp�ɼƴ�1
	            }
	        }
	        printf("�˭p�ɡX�X%02d:%02d:%02d\r", hour, min, sec);
	    }
	}
	puts("\n�p�ɵ���\n");
	printf("��X\n");
	system("pause");
}


