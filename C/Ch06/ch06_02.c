#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Score[5];/*宣告整數陣列Score[5]*/
	int count,Total=0,average=0;/*宣告3個整數變數*/
	
	for(count=0;count<5;count++)/*執行 for 迴圈讀取學生成績*/
	{
		printf("輸入第 %d 位學生的分數:",count+1);
		scanf("%d",&Score[count]);/*把輸入的分數寫到陣列*/
		Total+=Score[count];/*把陣列中讀取分數計算總合*/
	}
	
	average=Total/5;/*計算平均分數*/
	printf("\n");/*換行*/
	printf("學生的總分:%d\n",Total);/*輸出成績總合*/
	printf("學生的平均:%d\n",average);/*輸出成績平均*/
	
	return 0;
}
