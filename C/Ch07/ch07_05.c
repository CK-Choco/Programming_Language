#include <stdio.h>
#include <stdlib.h>

void swap(int *,int *);/*��ƶǧ}�I�s�쫬�ŧi*/

int main()
{
	int a,b;/*�ŧi����ܼ�a,b*/ 
	a=10;
	b=20;
	
	printf("swap()��ƥ洫�e�Ga=%d,b=%d\n",a,b);
	
	swap(&a,&b);/*�ǧ}�I�s*/
	
	printf("swap()��ƥ洫��Ga=%d,b=%d\n",a,b);
	return 0;
}

void swap(int *x,int *y)/*�ŧi x,y*/
{
	int t;/*�ŧi����ܼ� t*/ 
	printf("swap()��Ƥ��洫�e�Gx=%d,y=%d\n",*x,*y); 
	t=*x;
	*x=*y;
	*y=t;/*x,y�洫�L�{*/
	printf("swap()��Ƥ��洫��Gx=%d,y=%d\n",*x,*y);
}
