/*便當店點餐程式*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int select;
	printf("(1)排骨便當\n");
	printf("(2)海鮮便當\n");
	printf("(3)雞腿便當\n");
	printf("(4)魚排便當\n");
	printf("\n請輸入您要購買的便當代號:");
	
	scanf("%d",&select);/*輸入整數並存入變數select*/		
	
	printf("\n=====================================\n");
	switch(select)
	{
		case 1: /*如果select等於1*/
			printf("排骨便當一份75元");
			break;/*跳出switch*/ 
		case 2: /*如果select等於2*/
			printf("海鮮便當一份85元");
			break;/*跳出switch*/ 
		case 3: /*如果select等於3*/
			printf("雞腿便當一份80元");
			break;/*跳出switch*/ 
		case 4: /*如果select等於4*/
			printf("魚排便當一份60元");
			break;/*跳出switch*/ 	
		default:/*如果select不等於1,2,3,4任何一個*/
			printf("沒有這個選項\n");	
	}		
	printf("\n=====================================\n");		
			
	return 0;
}
