#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,tmp;
	int data[8]={26,35,49,37,12,8,45,63};/*原始資料*/ 
	
	printf("氣泡排序法:\n原始資料為:");
	
	for (i=0;i<8;i++)
		printf("%3d",data[i]);/*輸出原始資料內容*/ 
		printf("\n");
		
	for(i=7;i>0;i--)/*掃描次數*/ 
	{
		for (j=0;j<i;j++)/*比較、交換次數*/ 
		{
			for(data[j]>data[j+1])/*比較相鄰兩數，如第一數較大則交換*/ 
			{
				tmp=data[i];
				data[j]=data[j+1];/*交換順序*/ 
				data[j+1]=tmp;
			}
		}
	}
	printf("排序後結果為:");
	for (i=0;i<8;i++)
		printf("%3d",data[i]);
	printf("\n");
	
	return 0;
}
