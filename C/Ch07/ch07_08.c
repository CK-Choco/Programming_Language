#include <stdio.h>
#include <stdlib.h>

int min(int arr[][3][3],int,int,int);
/*min()函數的原型宣告*/
int main(void)
{
	int num[2][3][3]=
				{{{43,45,67},
				  {73,71,56},
				  {55,38,66}},
				  {{21,39,25},
				  {38,89,18},
				  {90,101,89}}};/*宣告三維陣列*/
				  
	printf("三維陣列的最小值 = %d\n",min(num,2,3,3));
	
	return 0;
}
int min(int arr[][3][3],int a,int b,int c)/*定義min()函數主體*/
{
	int i,j,k,min_value;
	
	min_value=arr[0][0][0];/*設定min_value的值為陣列第一個元素值*/
	
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
			for(k=0;k<c;k++)
				if(min_value>=arr[i][j][k])
					min_value=arr[i][j][k];/*利用三層迴圈找出最小值*/
					
	return min_value;/*傳回整數 min_value*/
} 
