#include <stdio.h>
#include <stdlib.h>

void cal_score(int arr[][5],int,int);/*��ƭ쫬�ŧi*/

int main()
{
	/*�ŧi�ê�l�ƤG�����Z�}�C*/
	int score[][5]={{59,69,73,82,45},{81,42,53,64,55}};
	int i,j;
	
	cal_score(score,2,5);/*�I�s�öǻ��G���}�C*/
	
	printf("--------------------\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
			printf("%d",score[i][j]);/*��X�G���}�C�U���������*/
		printf("\n");
	}
	return 0;
}
void cal_score(int arr[][5],int r,int c)/*�w�qcal_score()��ƥD��*/
{
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",arr[i][j]);/*��X�G���}�C�U���������*/
			arr[i][j]=arr[i][j]*1.2;/*�}�C����*1.2*/	
		}
		printf("\n");	
	}
} 
