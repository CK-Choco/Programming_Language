/*scanf()函數輸入資料*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int no1,no2;
	
	scanf("%d%d",&no1,&no2);/*輸入兩個整數變數的值*/ 
	printf("%d\n",no1+no2);	/*計算與輸出兩數的和*/ 
	return 0;
}
