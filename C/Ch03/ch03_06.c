/*�ƦX���w�B��l��@*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	int x=10,y=20,z=30;/*�ŧix,y,z�ܼƻP���w��l��*/ 
	a=b=5;/*�]�w����ܼ�a�Pb����l��*/ 
	printf("a=%d,b=%d\n",a,b);/*��Xa�Pb����*/ 
	printf("x=%d,y=%d,z=%d\n",x,y,z);/*��Xx,y,z����*/ 
	printf("�p���:x*=a+=y%%=b-=z*=5\n");
	x*=a+=y%=b-=z*=5;/*�Q�βV�X���w�B��l,�p��W�C�⦡*/ 
	printf("x=%d\n",x);/*��Xx����*/ 
	
	return 0;
}
