/*關係與邏輯運算子求值*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int a=3,b=5,c=7;/*宣告a,b及c三個整數變數*/
	
	printf("a=%d b=%d c=%d\n",a,b,c);
	printf("================================\n");
	
	printf("a<b && b<c || c<a=%d\n",a<b&&b<c||c<a);
	printf("!(a==b)&&(!a<b)=%d\n",!(a==b)&&(!a<b));
	/*包含關係與邏輯運算子的運算式求值*/ 
			
	return 0;
}
