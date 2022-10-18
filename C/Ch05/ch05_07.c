#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;/*宣告a,b為整數變數*/
	for(a=1;a<=9;a++)/*外層for迴圈控制y軸輸出*/
	{
		for(b=1;b<=a;b++)/*內層for迴圈控制x軸輸出*/
		{
		if (b==8)/*跳離這層迴圈*/
				continue;
			printf("%d",b);/*印出b的值*/
		}
	printf("\n");
	}
	return 0;
}
