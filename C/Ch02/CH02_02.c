/*sizeof運算子的應用*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int my_variable=100;/*宣告my_variable為整數型態*/
	
	printf("my_variable的資料長度 = %d 位元組 \n",sizeof my_variable);
	/*可以不加括號*/
	printf("整數型態的資料長度 = %d 位元組 \n",sizeof(int));
	/*必須加上括號*/		
	
	return 0;
}
