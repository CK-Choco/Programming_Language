#include <stdio.h> /*雙層巢狀迴圈的範例*/
#include <stdlib.h>

int main(vold)
{
	int i,j;
	/*九九乘法表的巢狀迴圈*/ 
	for(i=1; i<=9; i++)/*外層迴圈*/ 
	{
		for(j=1; j<=9; j++)/*內層迴圈*/ 
		{
			printf("%d*%d=",i,j);/*輸出i與j的值*/ 
			printf("%d\t",i*j);/*輸出i*j的值*/ 
		}
		printf("\n");
	}
	return 0;
}
