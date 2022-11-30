/*運算子優先權實作*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;/*宣告a,b,c為整數變數*/
	a=12;b=30;
	
	c=a*19+(b+7%2)-20*7%(b%7)-++a;
	/*運算子優先權運算過程*/
	printf("a=%d b=%d\n",a,b);
	printf("a*9+(b+7%2)-20*7%(b%5)-++a=%d\n",c);
	/*輸出最後結果*/		
	return 0;
}
