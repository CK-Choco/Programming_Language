/*�q�O�p�⤣�D�H*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int degree,pay;/*�ŧi��Ӿ���ܼ�degree,pay*/
	
	printf("�п�J�q�q�׼�:");
	scanf("%d",&degree);/*��J����q�q�׼�*/
	
	if(degree>=1 && degree<=100)
		pay=10*degree;/*1~100��*/
	
	else if(degree>=101 && degree<=200)	
		pay=12.5*degree;/*101~200��*/
		
	else if(degree>=201 && degree<=300)	
		pay=18*degree;/*201~300��*/	
		
	else
		pay=22*degree;/*300�ץH�W*/
			
	printf("����ιq�q��%d��,�q�O�n%d��\n",degree,pay);
	/*��X����q�q�׼ƻP�q�O���B*/ 
	
	return 0;
}
