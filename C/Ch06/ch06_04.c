#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[2][2];/*宣告整數二維陣列*/
	int sum;/*宣告整數變數*/ 
	
	printf("|a1 b1|\n");
	printf("|a2 b2|\n");
	
	printf("請輸入a1:");
	scanf("%d",&arr[0][0]);/*輸入a1*/ 
	printf("請輸入b1:");
	scanf("%d",&arr[0][1]);/*輸入b1*/ 
	printf("請輸入a2:");
	scanf("%d",&arr[1][0]);/*輸入a2*/ 
	printf("請輸入b2:");
	scanf("%d",&arr[1][1]);/*輸入b2*/ 
	
	sum = arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
	/*二階行列式的運算*/
	printf("|%d %d|\n",arr[0][0],arr[0][1]);
	printf("|%d %d|\n",arr[1][0],arr[1][1]);
	printf("sum=%d\n",sum);
	
	return 0;
}
