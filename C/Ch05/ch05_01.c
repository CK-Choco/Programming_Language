#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,sum=0; /*�j��~�]�w�����ܼư_�l��*/
	for (;i<=10;i++)/*�w�qfor�j��*/ 
		sum=sum+i;/*sum=sum+1*/ 
	printf("1+2+3+...+10=%d\n",sum);/*��Jsum����*/
	return 0;
}
