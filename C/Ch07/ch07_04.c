#include <stdio.h>
#include <stdlib.h>

int swap(int,int);/*�ǭȩI�s��ƭ쫬�ŧi*/

int main(vold)
{
	int a,b;
	a=10;
	b=20;/*�]�wa,b�����*/
	printf("swap��ƥ洫�e�Ga=%d,b=%d\n",a,b);
	
	swap(a,b);/*��ƩI�s*/
	
	printf("swap��ƥ洫��Ga=%d,b=%d\n",a,b);
	return 0;
}

int swap(int x,int y)/*���Ǧ^��*/
{
	int t;
	printf("swap��Ƥ��洫�e�Gx=%d,y=%d\n",x,y); 
	t=x;
	x=y;
	y=t;/*�洫�L�{*/
	printf("swap��Ƥ��洫��Gx=%d,y=%d\n",x,y);
}
