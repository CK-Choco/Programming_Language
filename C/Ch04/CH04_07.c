/*閏年計算機*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int year=0;
	/*宣告整數變數*/
	printf("請輸入西元年:");
	scanf("%d",&year);/*輸入西元年*/
	 
	if(year % 4 !=0)/*如果year不是4的倍數*/
		printf("%d年不是閏年。\n",year);/*則顯示year不是閏年*/
	else if(year % 100 ==0)/*如果year是100的倍數*/
	{	 
		if(year % 400 ==0)/*且year是400的倍數*/
			printf("%d年是閏年。\n",year);
		/*顯示year是閏年*/
		else /*否則*/
			printf("%d年不是閏年。\n",year);
			/*則顯示year不是閏年*/
	}
	else /*否則*/
		printf("%d年是閏年。\n",year);/*則顯示year是閏年*/
	 
	return 0;
}
