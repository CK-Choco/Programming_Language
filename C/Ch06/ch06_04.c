#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[2][2];/*�ŧi��ƤG���}�C*/
	int sum;/*�ŧi����ܼ�*/ 
	
	printf("|a1 b1|\n");
	printf("|a2 b2|\n");
	
	printf("�п�Ja1:");
	scanf("%d",&arr[0][0]);/*��Ja1*/ 
	printf("�п�Jb1:");
	scanf("%d",&arr[0][1]);/*��Jb1*/ 
	printf("�п�Ja2:");
	scanf("%d",&arr[1][0]);/*��Ja2*/ 
	printf("�п�Jb2:");
	scanf("%d",&arr[1][1]);/*��Jb2*/ 
	
	sum = arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
	/*�G����C�����B��*/
	printf("|%d %d|\n",arr[0][0],arr[0][1]);
	printf("|%d %d|\n",arr[1][0],arr[1][1]);
	printf("sum=%d\n",sum);
	
	return 0;
}
