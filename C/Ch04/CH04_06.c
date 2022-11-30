/*分數群組判斷*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;/*宣告ch字元變數*/
	
	printf("A,B,C,D,E\n");
	printf("請輸入分數群組:");
	
	scanf("%c",&ch);/*輸入字元變數ch*/
	/*switch 條件敘述開始*/
	switch(ch)
	{
		/*此處不佳大括號*/
		case'A':
		case'a':/*輸入大寫或小寫字母都可*/
			printf("分數在90分以上!\n");
			break;	
		case'B':
		case'b':/*輸入大寫或小寫字母都可*/
			printf("分數在80分以上!\n");
			break;
		case'C':
		case'c':/*輸入大寫或小寫字母都可*/
			printf("分數在70分以上!\n");
		case'D':
		case'd':/*輸入大寫或小寫字母都可*/
			printf("分數在60分以上!\n");
			break;	
			break;	
		case'E':
		case'e':/*輸入大寫或小寫字母都可*/
			printf("你被當掉了!\n");
			break;
		default:/*其他字元則執行default指令*/
			printf("沒有此分數群組\n");
			break;					
	}  
	
	return 0;
}
