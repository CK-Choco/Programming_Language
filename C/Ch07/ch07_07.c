#include <stdio.h>
#include <stdlib.h>

void cal_score(int arr[][5],int,int);/*函數原型宣告*/

int main()
{
	/*宣告並初始化二維成績陣列*/
	int score[][5]={{59,69,73,82,45},{81,42,53,64,55}};
	int i,j;
	
	cal_score(score,2,5);/*呼叫並傳遞二維陣列*/
	
	printf("--------------------\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
			printf("%d",score[i][j]);/*輸出二維陣列各元素的函數*/
		printf("\n");
	}
	return 0;
}
void cal_score(int arr[][5],int r,int c)/*定義cal_score()函數主體*/
{
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",arr[i][j]);/*輸出二維陣列各元素的函數*/
			arr[i][j]=arr[i][j]*1.2;/*陣列元素*1.2*/	
		}
		printf("\n");	
	}
} 
