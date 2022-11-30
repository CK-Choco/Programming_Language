#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i =1,new_pw,password=3388;
	/*利用password變數來儲存密碼以供驗證*/
	while(i<=3)/*輸入次數以三次為限*/ 
	{
		printf("請輸入密碼:");
		scanf("%d",&new_pw);/*輸入整數密碼*/ 
		
		if (new_pw != password)/*如果輸入的密碼與password不同*/ 
		{
			printf("密碼發生錯誤!\n");
			i++;
			continue;/*跳回while開始處*/ 
		}
		printf("密碼正確!!\n");/*密碼正確*/ 
		break;
	}
	if(i>3)
		printf("密碼錯誤三次，取消登入!!\n");/*密碼錯誤處理*/
	return 0;
}
