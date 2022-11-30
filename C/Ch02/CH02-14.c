/*成績統計小幫手*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int no,Chi,Eng,Math;
	float total,ave;
	
	
	
	printf("請輸入學生學號:");
	scanf("%d",&no);/*由鍵盤輸入學生學號*/ 
	
	printf("請輸入 國文 英文 數學成績:");
	scanf("%d,%d,%d",&Chi,&Eng,&Math);
	/*由鍵盤輸入三筆成績*/ 
	total=Chi+Eng+Math;/*計算三項總分*/ 
	ave=total/3;/*計算平均成績*/ 
	/*劃出間隔線*/ 
	printf("******************************************\n");
	printf("學號:%d\n",no);
	printf("國文\t英文\t數學\t總分\t平均\n");
	printf("%d\t%d\t%d\t\%.0f\t%.1f\n",Chi,Eng,Math,total,ave);
	
	return 0;
}
