/*���Z�έp�p����*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int no,Chi,Eng,Math;
	float total,ave;
	
	
	
	printf("�п�J�ǥ;Ǹ�:");
	scanf("%d",&no);/*����L��J�ǥ;Ǹ�*/ 
	
	printf("�п�J ��� �^�� �ƾǦ��Z:");
	scanf("%d,%d,%d",&Chi,&Eng,&Math);
	/*����L��J�T�����Z*/ 
	total=Chi+Eng+Math;/*�p��T���`��*/ 
	ave=total/3;/*�p�⥭�����Z*/ 
	/*���X���j�u*/ 
	printf("******************************************\n");
	printf("�Ǹ�:%d\n",no);
	printf("���\t�^��\t�ƾ�\t�`��\t����\n");
	printf("%d\t%d\t%d\t\%.0f\t%.1f\n",Chi,Eng,Math,total,ave);
	
	return 0;
}
