#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	int yes;
	float c,f;
	printf("CF = 1 ; FC = 2\n");
	printf("�п�������ؤ�(CF)�A�ؤ������(FC):");
	scanf("%d",&yes);
	if (yes == 1){ 
		printf("�п�J���ū�:");
		scanf("%f",&c);/*�ۦ��J�ū�*/
	
		f=(9*c)/5+32;/*�ؤ�P���ū��ഫ����*/ 
		printf("���%.1f��=�ؤ�%.1f��\n",c,f);} 
	else if (yes == 2){ 
		printf("�п�J�ؤ�ū�:");
		scanf("%f",&f);/*�ۦ��J�ū�*/
	
		c=(f-32)*5/9;/*�ؤ�P���ū��ഫ����*/ 
		printf("�ؤ�%.1f��=���%.1f��\n",f,c);} 
	else
		printf("�o�Ϳ��~");
	return 0;
}
