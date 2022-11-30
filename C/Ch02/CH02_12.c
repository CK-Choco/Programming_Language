/*格式化字元進階設定*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*宣告整數變數no與浮點數變數fno*/
	int no=523;
	float fno=13.4567;
	
	printf("%4d\n",no);/*以%4d輸出*/
	printf("%-4d\n",no);/*以%-4d輸出*/
	printf("%6.3f\n",fno);/*以%6.3f輸出*/			
	return 0;
}
