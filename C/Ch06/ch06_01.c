#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[10]={11,2,33,4,51,6,17,80,9,60};/*�ŧiarr�}�C,�õ��w��l��*/
	int i,sum=0;/*�ŧii,sum������ܼ�*/
	
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
		if(i<9)
			printf(" + ");/*�̫�@�Ӥ����᭱���ΦL+��*/
		sum = sum+arr[i];
	}
	printf(" = %d\n",sum);/*��X�֥[�᪺���G*/
	return 0;
}
