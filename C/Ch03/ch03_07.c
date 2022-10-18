/*條件運算子的使用*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int math,physical;	/*宣告兩科目的整數變數*/ 
	char chr_pass;		/*宣告表示合格的字元變數*/ 
	
	printf("請輸入數學與物理成績:");
	scanf("%d %d",&math,&physical);/*輸入兩科成績*/
	printf("數學=%d分與 物理=%d分\n",math,physical);
	(math >= 60 && physical >= 60)?(chr_pass='Y'):(chr_pass='N');
	/*利用條件運算子來判斷兩科成績是否都合格*/
	printf("該名考生是否都及格?%c\n",chr_pass);
	/*輸出chr_pass變數內容,顯示該考生是否合格*/
			
	return 0;
}
