/*跳脫序列的應用*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	/*宣告字元變數*/ 
	char ch=34;/*ch設定為雙引號的ASCII碼*/
	
	/*輸出帶有雙引號的字串*/ 
	printf("%c勁園台科大圖書%c\n",ch,ch);/*雙引號的應用*/ 
	printf("%c",'\a');
	printf("\n");
	
	return 0;
}
