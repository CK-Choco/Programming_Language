#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("請輸入任一整數:");
	scanf("%d",&n);/*輸入整數n*/
	
	printf("反向輸出的結果:");
	
	/* do while迴圈*/
	do {
		printf("%d",n%10);/*求出餘數值*/
		n=n/10;/*從個位數開始逐步往前一位*/
	}	while(n!=0);/*條件判斷式*/
	
	printf("\n");/*跳行*/
	
	return 0;
}
