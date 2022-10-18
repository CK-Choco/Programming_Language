/*計算圓面積*/ 
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159 /*已巨集指令#define 宣告PI為3.14159*/ 

int main(void) 
{
	const int radius=10;/*const宣告與設定圓半徑常數*/ 
	
	printf("圓的半徑為=%d,面積是=%f \n",radius,radius*radius*PI);
	/*輸出圓半徑與計算圓面積*/ 
	return 0;
}
