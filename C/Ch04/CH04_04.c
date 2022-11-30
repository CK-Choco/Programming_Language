/*電費計算不求人*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int degree,pay;/*宣告兩個整數變數degree,pay*/
	
	printf("請輸入電量度數:");
	scanf("%d",&degree);/*輸入本月電量度數*/
	
	if(degree>=1 && degree<=100)
		pay=10*degree;/*1~100度*/
	
	else if(degree>=101 && degree<=200)	
		pay=12.5*degree;/*101~200度*/
		
	else if(degree>=201 && degree<=300)	
		pay=18*degree;/*201~300度*/	
		
	else
		pay=22*degree;/*300度以上*/
			
	printf("本月用電量有%d度,電費要%d元\n",degree,pay);
	/*輸出本月電量度數與電費金額*/ 
	
	return 0;
}
