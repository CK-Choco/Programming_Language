#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x=1,sum=100;/*�ŧix,sum��Ӿ���ܼ�*/ 
	
	while(sum>=0)/*while�j��*/
	{
		sum=sum-x;/*sum�}�l��hx,x=1,2,3...*/ 
		x++;/*x���W1*/ 
	}
	printf("x=%d\n",x-1);/*���e�w���[1�F*/
	return 0;
}
