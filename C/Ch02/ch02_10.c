/*格式化輸出實作*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int no=5;
	float price=420.5;
	
	printf("今天是星期天,天氣晴朗.\n");
	/*直接輸出一個字串*/ 
	printf("一本書要%f元,大華買了%d本書,一共花了%f元\n",price,no,no*price);
	/*格式化字元與引述列中各個項目間的對應*/ 
	
	return 0;
}
 
