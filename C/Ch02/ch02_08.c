/*字元宣告實作*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	
	char char1='a';	/*宣告字元變數與設定值為'a'*/ 
	char char2=88;	/*宣告字元變數與設定值為ASCII碼為88*/ 
	
	/*輸出char1字元變數和它的ASCII碼*/ 
	printf("char1=%c 的ASCII碼=%d\n",char1,char1);
	/*輸出char2字元變數和它的ASCII碼*/ 
	printf("char2=%c 的ASCII碼=%d\n",char2,char2);
	
	char1=char1+10;	/*字元變數char1的加法運算功能*/ 
	printf("char1=%c 的ASCII碼=%d\n",char1,char1);
	/*輸出加法運算後的字元和ASCII碼*/ 
	char2=char2-32;/*字元變數char2的減法運算功能*/ 
	printf("char2=%c 的ASCII碼=%d\n",char2,char2);
	/*輸出減法運算後的字元和ASCII碼*/ 
	
	return 0;
}
