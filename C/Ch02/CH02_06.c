/*單精度與被精度浮點數*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*比較浮點數字面常數後面是否加上f的儲存位元組有何不同*/
	printf("%f=%d\n",503.23f,sizeof 503.23f);
	printf("%f=%d\n",503.23,sizeof 503.23);
		
	return 0;
}
