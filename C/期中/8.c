#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int h,f,t,o;
	
	printf("�п�J�n�I���`�B:");
	scanf("%d",&num);
	
	h=num/100;
	f=(num-h*100)/50;
	t=(num-h*100-f*50)/10;
	o=num-h*100-f*50-t*10; 
	
	printf("-----------------------------------------\n");
	printf("�ʤ��r��%d�i,���Q�w������%d��,�Q���w����%d��,�@���w����%d��\n",h,f,t,o);
	return 0;
}
