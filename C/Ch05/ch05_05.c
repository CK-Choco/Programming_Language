#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("�п�J���@���:");
	scanf("%d",&n);/*��J���n*/
	
	printf("�ϦV��X�����G:");
	
	/* do while�j��*/
	do {
		printf("%d",n%10);/*�D�X�l�ƭ�*/
		n=n/10;/*�q�Ӧ�ƶ}�l�v�B���e�@��*/
	}	while(n!=0);/*����P�_��*/
	
	printf("\n");/*����*/
	
	return 0;
}
