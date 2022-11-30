/*鈔票兌換機*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;/*宣告為整數變數*/
	int hundred,fifty,ten,one;/*宣告為整數變數*/
	
	printf("請輸入要兌換總數:");
	scanf("%d",&num);/*輸入兌換總額*/
	/*利用簡單的四則運算*/
	hundred=num/100;/*換百元鈔*/
	fifty=(num-hundred*100)/50;/*換50元硬幣*/
	ten=(num-hundred*100-fifty*50)/10;/*換10元硬幣*/ 
	one=num-hundred*100-fifty*50-ten*10;/*換10元硬幣*/ 
	
	printf("-----------------------------------------\n");
	/*畫出分隔線*/
	printf("百元鈔有%d張,五十硬幣元有%d個,十元硬幣有%d個,一元硬幣有%d個\n",hundred,fifty,ten,one);
	return 0;
}
