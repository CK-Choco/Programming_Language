#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	int no,Chi,Eng,Math;
	float total,ave;
	
	printf("請輸入學生學號:");
	scanf("%d",&no);
	
	printf("請輸入 國文 英文 數學成績:");
	scanf("%d,%d,%d",&Chi,&Eng,&Math);
	
	total=Chi+Eng+Math;
	ave=total/3;
	
	printf("********************\n");
	printf("學號: %d\n",no);
	printf("國文 \t 英文 \t 數學 \t 總分 \t 平均 \n");
	printf("%d\t%d\t%d\t%.0f\t%.1f\n",Chi,Eng,Math,total,ave);
	return 0;
}
