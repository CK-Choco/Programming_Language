#include <stdio.h>
#include <stdlib.h>

void swap(int *,int *);/*ㄧ计肚㊣*/

int main()
{
	int a,b;/*俱计跑计a,b*/ 
	a=10;
	b=20;
	
	printf("swap()ㄧ计ユ传玡a=%d,b=%d\n",a,b);
	
	swap(&a,&b);/*肚㊣*/
	
	printf("swap()ㄧ计ユ传a=%d,b=%d\n",a,b);
	return 0;
}

void swap(int *x,int *y)/* x,y*/
{
	int t;/*俱计跑计 t*/ 
	printf("swap()ㄧ计ずユ传玡x=%d,y=%d\n",*x,*y); 
	t=*x;
	*x=*y;
	*y=t;/*x,yユ传筁祘*/
	printf("swap()ㄧ计ずユ传x=%d,y=%d\n",*x,*y);
}
