#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,sum=0;/*�ŧii,sum������ܼ�*/ 
	
	for(i=1;i<=100;i=i+2)/*i=1,3,5,7..*/ 
	{
		if(i==79)
			break;/*���X�j��*/
		sum+=i;/*sum=sum+i*/
		
	}
	printf("1~77���_���`�M:%d\n",sum);
	
	return 0;
}
