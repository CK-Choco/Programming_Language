/*���W�P����B��l��@*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	
	a=15;
	printf("a=%d \n",a);
	printf("�e�m�����W�B��l:b=++a\n");
	b=++a;/*�e�m�����W�B��l*/ 
	printf("a=%d,b=%d\n\n",a,b);
	
	a=15;
	printf("a=%d \n",a);
	printf("�e�m�����W�B��l:b=a++\n");
	b=a++;/*��m�����W�B��l*/ 
	printf("a=%d,b=%d\n\n",a,b);
		
	a=15;
	printf("a=%d \n",a);
	printf("�e�m�����W�B��l:b=--a\n");
	b=--a;/*�e�m������B��l*/ 
	printf("a=%d,b=%d\n\n",a,b);
		
	a=15;
	printf("a=%d \n",a);
	printf("�e�m�����W�B��l:b=a--\n");
	b=a--;/*�e�m������B��l*/ 
	printf("a=%d,b=%d\n\n",a,b);
	
	return 0;
}
