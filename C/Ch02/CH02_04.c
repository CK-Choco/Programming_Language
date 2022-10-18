/*整數修飾詞綜合實作*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int no1=123456UL;/*宣告常整數*/
	unsigned short no2=9786;/*宣告無號短整數*/
	int no3=5678;
	/*輸出各種整數變數與所佔位元組*/
	printf("常整數為:%d 佔了%d 位元組\n",no1,sizeof no1);
	printf("無號長整數為:%d 佔了%d 位元組\n",no2,sizeof no2);
	printf("整數為:%d 佔了%d 位元組\n",no3,sizeof no3);
	return 0;
}
