/*�줸�B��l��X�B��*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=12;
	
	printf("%d&38=%d\n",a,a&38);/*AND�B��*/
	printf("%d|38=%d\n",a,a|38);/*OR�B��*/
	printf("%d^38=%d\n",a,a^38);/*XOR�B��*/
	printf("~%d=%d\n",a,~a);	/*NOT�B��*/
	printf("%d<<2=%d\n",a,a<<2);/*�����B��*/ 
	printf("%d>>2=%d\n",a,a>>2);/*�k���B��*/	
	return 0;
}
