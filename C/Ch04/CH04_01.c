/*消費滿額贈送來店禮*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int charge;/*宣告charge變數*/
	printf("請輸入總消費金額:");
	scanf("%d",&charge);/*請輸入消費金額*/
	
	if(charge>=2000)/*如果消費金額大於等於2000*/
	printf("請到10F領取周年慶禮品\n");
			
	return 0;
}
