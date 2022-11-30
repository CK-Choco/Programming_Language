#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	char time;
	
	printf("0~24\n");
	printf("請輸入時間(小時):");
	
	scanf("%d",&time);
	
	switch(time)
	{
		case 24:
			printf("不能吃，要睡覺");
			break;
		case 0:
			printf("不能吃，要睡覺");
			break;
		case 1:
			printf("不能吃，要睡覺");
			break;
		case 2:
			printf("不能吃，要睡覺");
			break;
		case 3:
			printf("不能吃，要睡覺");
			break;
		case 4:
			printf("不能吃，要睡覺");
			break;
		case 5:
			printf("不能吃，要睡覺");
			break;
		case 23:
			printf("吃晚餐\");
			break;
		case 22:
			printf("吃晚餐\");
			break;
		case 21:
			printf("吃晚餐\");
			break;
		case 20:
			printf("吃晚餐\");
			break;
		case 19:
			printf("吃晚餐\");
			break;
		case 18:
			printf("吃晚餐\");
			break;
		case 17:
			printf("吃午餐\");
			break;
		case 16:
			printf("吃午餐\");
			break;
		case 15:
			printf("吃午餐\");
			break;
		case 14:
			printf("吃午餐\");
			break;
		case 13:
			printf("吃午餐\");
			break;
		case 12:
			printf("吃午餐\");
			break;
		case 11: 
			printf("吃早餐\");
			break;
		case 10:
			printf("吃早餐\");
			break;
		case 9:
			printf("吃早餐\");
			break;
		case 8:
			printf("吃早餐\");
			break;
		case 7:
			printf("吃早餐\");
			break;
		case 6:
			printf("吃早餐\");
			break;
		default:
			printf("錯誤!!，非24小時");
	}
	return 0;
}
