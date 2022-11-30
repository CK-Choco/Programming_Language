#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int h,f,t,o;
	
	printf("請輸入要兌換總額:");
	scanf("%d",&num);
	
	h=num/100;
	f=(num-h*100)/50;
	t=(num-h*100-f*50)/10;
	o=num-h*100-f*50-t*10; 
	
	printf("-----------------------------------------\n");
	printf("百元鈔有%d張,五十硬幣元有%d個,十元硬幣有%d個,一元硬幣有%d個\n",h,f,t,o);
	return 0;
}
