#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[3][10];/*宣告儲存姓名的字串陣列*/
	int score[3][3];/*宣告儲存成績的整數二維陣列*/
	int i,total;/*宣告整數變數 total*/
	
	for(i=0;i<3;i++)
	{
		printf("請輸入第 %d位學生姓名及三科成績:",i+1);
		scanf("%s",&name[i]);/*輸入學生性名*/ 
		scanf("%d %d %d",&score[i][0],&score[i][1],&score[i][2]);
		/*輸入三科成績*/ 
	}
	printf("--------------------\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d",name[i],score[i][0],score[i][1],score[i][2]);
		total=score[i][0]+score[i][1]+score[i][2];
		printf("\t%d\n",total)/*輸出三科的總分*/
	}
	printf("--------------------\n");
	
	return 0;
}
