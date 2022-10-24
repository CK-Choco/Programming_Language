#include <stdio.h>
#include <stdlib.h>

int mymax(int,int);/*函數原型宣告*/

int main(vold)
{
	int a,b;
	printf("數字比大小\n請輸入 a:");
	scanf("%d",&a);/*輸入整數變數a*/
	
	printf("數字比大小\n請輸入 b:");
	scanf("%d",&b);/*輸入整數變數b*/
	
	printf("較大者值為:%d\n",mymax(a,b));/*函數呼叫*/
	
	return 0;
}

int mymax(int x,int y)/*函數定義主體*/
{
	if(x>y)
		return x;/*傳回x值*/
	else
		return y;/*傳回y值*/
}
