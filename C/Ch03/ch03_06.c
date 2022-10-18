/*複合指定運算子實作*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b;
	int x=10,y=20,z=30;/*宣告x,y,z變數與指定初始值*/ 
	a=b=5;/*設定整數變數a與b的初始值*/ 
	printf("a=%d,b=%d\n",a,b);/*輸出a與b的值*/ 
	printf("x=%d,y=%d,z=%d\n",x,y,z);/*輸出x,y,z的值*/ 
	printf("計算機:x*=a+=y%%=b-=z*=5\n");
	x*=a+=y%=b-=z*=5;/*利用混合指定運算子,計算上列算式*/ 
	printf("x=%d\n",x);/*輸出x的值*/ 
	
	return 0;
}
