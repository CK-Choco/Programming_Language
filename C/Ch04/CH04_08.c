/*簡易的計算機製作*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b;	/*宣告a,b為浮點數變數*/
	char op_key;/*宣告op_key為字元變數*/
	
	printf("請輸入兩個浮點數數字與+,-,*,/,如200*30\n");
	
	scanf("%f %c %f",&a,&op_key,&b);/*輸入字元並存入變數op_key*/
	
	switch(op_key)
	{
		case'+':/*如果op_key等於'+'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a+b);
			break;/*跳出awitch*/
		case'-':/*如果op_key等於'-'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a-b);
			break;/*跳出awitch*/			
		case'*':/*如果op_key等於'*'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a*b);
			break;/*跳出awitch*/			
		case'/':/*如果op_key等於'/'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a/b);
			break;/*跳出awitch*/			
		default:	/*如果op_key不等於 + - * /任何一個*/
			printf("運算式有誤\n"); 		
	} 
	
	return 0;
}
