#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x=1,sum=100;/*宣告x,sum兩個整數變數*/ 
	
	while(sum>=0)/*while迴圈*/
	{
		sum=sum-x;/*sum開始減去x,x=1,2,3...*/ 
		x++;/*x遞增1*/ 
	}
	printf("x=%d\n",x-1);/*之前預先加1了*/
	return 0;
}
