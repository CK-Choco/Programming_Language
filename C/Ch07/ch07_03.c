#include <stdio.h>
#include <stdlib.h>

int mymax(int,int);/*��ƭ쫬�ŧi*/

int main(vold)
{
	int a,b;
	printf("�Ʀr��j�p\n�п�J a:");
	scanf("%d",&a);/*��J����ܼ�a*/
	
	printf("�Ʀr��j�p\n�п�J b:");
	scanf("%d",&b);/*��J����ܼ�b*/
	
	printf("���j�̭Ȭ�:%d\n",mymax(a,b));/*��ƩI�s*/
	
	return 0;
}

int mymax(int x,int y)/*��Ʃw�q�D��*/
{
	if(x>y)
		return x;/*�Ǧ^x��*/
	else
		return y;/*�Ǧ^y��*/
}
