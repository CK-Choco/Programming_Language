#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	int no,Chi,Eng,Math;
	float total,ave;
	
	printf("�п�J�ǥ;Ǹ�:");
	scanf("%d",&no);
	
	printf("�п�J ��� �^�� �ƾǦ��Z:");
	scanf("%d,%d,%d",&Chi,&Eng,&Math);
	
	total=Chi+Eng+Math;
	ave=total/3;
	
	printf("********************\n");
	printf("�Ǹ�: %d\n",no);
	printf("��� \t �^�� \t �ƾ� \t �`�� \t ���� \n");
	printf("%d\t%d\t%d\t%.0f\t%.1f\n",Chi,Eng,Math,total,ave);
	return 0;
}
