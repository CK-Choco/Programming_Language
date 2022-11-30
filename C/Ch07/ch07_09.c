#include <stdio.h>
#include <stdlib.h>

void ndegree_rec(int);/*遞迴函數的原型宣告*/

int main(void)
{
	int n;
	printf("請輸入n值:");
	scanf("%d",&n);/*輸入所求n!的n值*/
	printf("%d! = %d\n",n,ndegree_rec(n));
	
	return 0;
}
void ndegree_rec(int n)/*定義遞迴函數的主題*/
{
	if(n==1)
		return 1;/*跳出反覆執行過程中的缺口*/
	else
		return n*ndegree_rec(n-1);/*反覆執行的過程*/
} 
