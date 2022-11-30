#include <stdio.h>
#include <stdlib.h>

int leap_year(int);/*閨年函數原型宣告*/

int main(void)
{
	int i,j,w;
	int year,month;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	printf("請輸入西元年份:");
	scanf("%d",&year);/*輸入年份*/
	
	if (year >= 1900)
	{
		printf("請輸入當年月份:");
		scanf("%d",&month);/*輸入月份*/ 
		w=0;
		
		for(i=0;i<(year-1900);i++)
		{
		if (leap_year(i+1900))
			w=(w+366)%7;
		else
			w=(w+365)%7;
		}/*加上每年的天數*/
		
		if(leap_year(year))
			days[1]=29;
		else
			days[1]=28;/*閨年判斷方式*/
			
		for(i=0;i< month-1;i++)
			w=w+days[i];/*當年日期計算*/
			w=w%7;
			printf("\n\n");
			printf("\t%d年%d月\n\n",year,month);
			printf("  一  二  三  四  五  六  日\n");
			
			for(j=1;j<=w;j++)
				printf("    ");/*預留空格*/
				
			for(i=1;i<=days[month-1];i++)
			{
				printf(" %3d",i);
				if(i%7==(7-w)%7)
					printf("\n");/*到了週日就跳行*/
			}
			printf("\n");
	}
	else
		printf("請輸入1900年以後的年份\n");
	
	return 0;
}
int leap_year(int x)/*閨年判斷函數*/
{
	if(x % 4 !=0)
		return 0;
	else if (x % 100 ==0 && x % 400!=0)
		return 0;
	else
		return 1;
} 
