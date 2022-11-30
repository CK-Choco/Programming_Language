#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[10]={11,2,33,4,51,6,17,80,9,60};/*宣告arr陣列,並給定初始值*/
	int i,sum=0;/*宣告i,sum為整數變數*/
	
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
		if(i<9)
			printf(" + ");/*最後一個元素後面不用印+號*/
		sum = sum+arr[i];
	}
	printf(" = %d\n",sum);/*輸出累加後的結果*/
	return 0;
}
