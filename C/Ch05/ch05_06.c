#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,sum=0;/*宣告i,sum為整數變數*/ 
	
	for(i=1;i<=100;i=i+2)/*i=1,3,5,7..*/ 
	{
		if(i==79)
			break;/*跳出迴圈*/
		sum+=i;/*sum=sum+i*/
		
	}
	printf("1~77的奇數總和:%d\n",sum);
	
	return 0;
}
