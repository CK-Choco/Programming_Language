#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	int a=1,n;
	printf("請輸入一個數字:");
	scanf("%d",&n);/*輸入一個整數*/
	
	printf("%d的所有因數為:",n);
	
	while(a<=n)/*定義while迴圈,且設定條件為a<=n*/ 
	{
		if(n%a==0)/*當n能夠被a整除時~則a就是n的因數*/
		{/*則執行if內的敘述*/
			printf("%d",a);
			if(n!=a)
				printf(",");/*以，號來間隔*/ 
		}
		a++;/*a值遞增1*/ 
	}
	printf("\n");
	return 0;
}
