#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,sum=0; /*迴圈外設定控制變數起始值*/
	for (;i<=10;i++)/*定義for迴圈*/ 
		sum=sum+i;/*sum=sum+1*/ 
	printf("1+2+3+...+10=%d\n",sum);/*輸入sum的值*/
	return 0;
}
