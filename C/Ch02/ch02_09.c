/*跳脫字元的簡單應用*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c1='\a';	/*直接以'a'來設定值*/ 
	char c2=7;		/*以'\a'的ASCII碼來設定值*/ 
	
	printf("%c%c\n",c1,c2);/*輸出兩聲嗶聲*/ 
	return 0;
}
