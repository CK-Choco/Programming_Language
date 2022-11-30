#include <stdio.h>
#include <stdlib.h>

int swap(int,int);/*肚㊣ㄧ计*/

int main(vold)
{
	int a,b;
	a=10;
	b=20;/*砞﹚a,b*/
	printf("swapㄧ计ユ传玡a=%d,b=%d\n",a,b);
	
	swap(a,b);/*ㄧ计㊣*/
	
	printf("swapㄧ计ユ传a=%d,b=%d\n",a,b);
	return 0;
}

int swap(int x,int y)/*ゼ肚*/
{
	int t;
	printf("swapㄧ计ずユ传玡x=%d,y=%d\n",x,y); 
	t=x;
	x=y;
	y=t;/*ユ传筁祘*/
	printf("swapㄧ计ずユ传x=%d,y=%d\n",x,y);
}
