/*�K���I�\�{��*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int select;
	printf("(1)�ư��K��\n");
	printf("(2)���A�K��\n");
	printf("(3)���L�K��\n");
	printf("(4)���ƫK��\n");
	printf("\n�п�J�z�n�ʶR���K��N��:");
	
	scanf("%d",&select);/*��J��ƨæs�J�ܼ�select*/		
	
	printf("\n=====================================\n");
	switch(select)
	{
		case 1: /*�p�Gselect����1*/
			printf("�ư��K��@��75��");
			break;/*���Xswitch*/ 
		case 2: /*�p�Gselect����2*/
			printf("���A�K��@��85��");
			break;/*���Xswitch*/ 
		case 3: /*�p�Gselect����3*/
			printf("���L�K��@��80��");
			break;/*���Xswitch*/ 
		case 4: /*�p�Gselect����4*/
			printf("���ƫK��@��60��");
			break;/*���Xswitch*/ 	
		default:/*�p�Gselect������1,2,3,4����@��*/
			printf("�S���o�ӿﶵ\n");	
	}		
	printf("\n=====================================\n");		
			
	return 0;
}
