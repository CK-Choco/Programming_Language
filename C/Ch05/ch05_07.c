#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;/*�ŧia,b������ܼ�*/
	for(a=1;a<=9;a++)/*�~�hfor�j�鱱��y�b��X*/
	{
		for(b=1;b<=a;b++)/*���hfor�j�鱱��x�b��X*/
		{
		if (b==8)/*�����o�h�j��*/
				continue;
			printf("%d",b);/*�L�Xb����*/
		}
	printf("\n");
	}
	return 0;
}
