#include <stdio.h> /*���h�_���j�骺�d��*/
#include <stdlib.h>

int main(vold)
{
	int i,j;
	/*�E�E���k���_���j��*/ 
	for(i=1; i<=9; i++)/*�~�h�j��*/ 
	{
		for(j=1; j<=9; j++)/*���h�j��*/ 
		{
			printf("%d*%d=",i,j);/*��Xi�Pj����*/ 
			printf("%d\t",i*j);/*��Xi*j����*/ 
		}
		printf("\n");
	}
	return 0;
}
