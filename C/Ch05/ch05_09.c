#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Num1,Num2,TmpNum;
	
	printf("―ㄢ俱计程そ计(g.c.d):\n");
	printf("叫块ㄢ俱计:");
	
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
	printf("程そ计(g.c.d)=%d\n",Num1);
	printf("--------------------\n");
	return 0;
}
