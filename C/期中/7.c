#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	int yes;
	float c,f;
	printf("CF = 1 ; FC = 2\n");
	printf("請選擇攝氏轉華氏(CF)，華氏轉攝氏(FC):");
	scanf("%d",&yes);
	if (yes == 1){ 
		printf("請輸入攝氏溫度:");
		scanf("%f",&c);/*自行輸入溫度*/
	
		f=(9*c)/5+32;/*華氏與攝氏溫度轉換公式*/ 
		printf("攝氏%.1f度=華氏%.1f度\n",c,f);} 
	else if (yes == 2){ 
		printf("請輸入華氏溫度:");
		scanf("%f",&f);/*自行輸入溫度*/
	
		c=(f-32)*5/9;/*華氏與攝氏溫度轉換公式*/ 
		printf("華氏%.1f度=攝氏%.1f度\n",f,c);} 
	else
		printf("發生錯誤");
	return 0;
}
