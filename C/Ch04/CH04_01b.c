#include <stdio.h>
#include <stdlib.h>

int main()
{
	int charge;/*宣告charge變數*/
	printf("請輸入年紀:");
	scanf("%d",&charge);/*輸入年紀*/
	
	if(charge>=18)/*年紀為18歲通過*/
	printf("可以考駕照了\n");
			
	return 0;
}
