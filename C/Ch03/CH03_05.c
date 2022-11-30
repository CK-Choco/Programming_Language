/*位元運算子綜合運用*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=12;
	
	printf("%d&38=%d\n",a,a&38);/*AND運算*/
	printf("%d|38=%d\n",a,a|38);/*OR運算*/
	printf("%d^38=%d\n",a,a^38);/*XOR運算*/
	printf("~%d=%d\n",a,~a);	/*NOT運算*/
	printf("%d<<2=%d\n",a,a<<2);/*左移運算*/ 
	printf("%d>>2=%d\n",a,a>>2);/*右移運算*/	
	return 0;
}
