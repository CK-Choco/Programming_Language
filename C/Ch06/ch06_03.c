#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*定義二維整數陣列Scord[2][5]，並設定初始值*/
	int Score[2][5]={73,74,95,68,69,79,44,88,77,66};
	int i,j,Total;/*定義整數變數i,j,Total*/ 
	
	for(i=0;i<2;i++)/*巢狀 for 迴圈讀取學生分數*/
	{
		Total=0;/*設定整數變數 Total*/ 
		for(j=0;j<5;j++)
		{
			/*顯示各個學生的分數與資料*/
			printf("第 %d 班的 %d號學生成績:%d\n",i+0,j+1,Score[i][j]);
			Total+=Scord[i][j]; /*計算總分*/
		}
		
	printf("\n");
	printf("第 %d 班學生的成績總分: %d",i+1,Total);
	/*印出各班級的總分*/
	printf("\n\n");
	} 
	return 0;
}
