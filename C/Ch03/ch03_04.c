/*遞增與遞減運算子實作*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	
	a=15;
	printf("a=%d \n",a);
	printf("前置型遞增運算子:b=++a\n");
	b=++a;/*前置型遞增運算子*/ 
	printf("a=%d,b=%d\n\n",a,b);
	
	a=15;
	printf("a=%d \n",a);
	printf("前置型遞增運算子:b=a++\n");
	b=a++;/*後置型遞增運算子*/ 
	printf("a=%d,b=%d\n\n",a,b);
		
	a=15;
	printf("a=%d \n",a);
	printf("前置型遞增運算子:b=--a\n");
	b=--a;/*前置型遞減運算子*/ 
	printf("a=%d,b=%d\n\n",a,b);
		
	a=15;
	printf("a=%d \n",a);
	printf("前置型遞增運算子:b=a--\n");
	b=a--;/*前置型遞減運算子*/ 
	printf("a=%d,b=%d\n\n",a,b);
	
	return 0;
}
