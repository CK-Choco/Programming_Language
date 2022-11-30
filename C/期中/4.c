#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	int a=5,b=5,x=10,y=20,z=30;
	x*=a+=y%=b-=z/=3;
	printf("%d",x);
	return 0;
}
