/*�B��l�u���v��@*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;/*�ŧia,b,c������ܼ�*/
	a=12;b=30;
	
	c=a*19+(b+7%2)-20*7%(b%7)-++a;
	/*�B��l�u���v�B��L�{*/
	printf("a=%d b=%d\n",a,b);
	printf("a*9+(b+7%2)-20*7%(b%5)-++a=%d\n",c);
	/*��X�̫ᵲ�G*/		
	return 0;
}
