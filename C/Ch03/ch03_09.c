/*型態轉換實作*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=3;		/*定義整數變數i,設定初值*/
	float f=100.2F;	/*定義浮點數f,設定初值*/ 
	double d=200.2;	/*定義倍精度浮點數變數d,設定初值*/ 
	
	printf("i(整數)=%d\n",i);
	printf("f(單精度浮點數)=%d\n",f);
	printf("d(倍精度浮點數)=%d\n",d);
	f=f/i;/*除法運算*/
	printf("f/i=%f\n",f);
	d=d/i;/*除法運算*/
	printf("d/i=%f\n",d);
	i=f+d;/*加法運算結果轉換成int型態再存入變數i*/
	printf("i(整數)=f+d=%d\n",i);
	 
	return 0;
}
