#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Num1,Num2,TmpNum;
	
	printf("�D����Ӿ�ƪ��̤j���]��(g.c.d):\n");
	printf("�п�J��Ӿ��:");
	
	scanf("%d %d",&Num1,&Num2);
	
	if(Num1<Num2)
	{
		TmpNum=Num1;
		Num1=Num2;
		Num2=TmpNum;
	}
	while(Num2!=0)
	{
		TmpNum=Num1 %Num2;
		Num1=Num2;
		Num2=TmpNum;
	}
	
	printf("--------------------\n");
	printf("�̤j���]��(g.c.d)=%d\n",Num1);
	printf("--------------------\n");
	return 0;
}
