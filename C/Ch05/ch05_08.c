#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score;
	printf("請輸入本次考試成績?");
	scanf("%d",&score);
	
	if (score>=60)
		goto pass;
		/*找到標籤名稱為pass的程式指令繼續執行程式*/
	else
		goto nopass;
		/*找到標籤名稱為nopass的程式指令繼續執行程式*/
	pass:/*pass標籤*/
		printf("\n恭喜你!成績及格了!\n");
		goto TheEnd;/*找到標籤名稱為TheEnd的程式指令繼續執行程式*/
	nopass:/*nopass標籤*/
		printf("\n很抱歉!成績不及格喔!\n");
	TheEnd:/*TheEnd標籤*/
		printf("程式執行完畢!\n\n");
	return 0;
}
