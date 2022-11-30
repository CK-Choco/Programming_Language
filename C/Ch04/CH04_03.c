/*消費金折扣回饋*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float cost=0;	/*宣告浮點數變數cost*/ 
	printf("請輸入消費總金額:");
	scanf("%f",&cost);	/*輸入消費金額*/
	
	if(cost>=150000)
		cost=cost*0.8;/*10萬元以上打8折*/ 
	else if(cost>=50000)
		cost=cost*0.85;/*5萬元到10萬之間打85折*/ 
	else
		cost=cost*0.9;/*5萬元以下打9折*/ 
	printf("實際消費總額:%.1f元\n",cost);
	/*消費金額輸出時保留到小數點後一位*/ 
			
	return 0;
}
