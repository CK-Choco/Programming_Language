/*�r���I����*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;/*�ŧi������ܼ�*/
	int hundred,fifty,ten,one;/*�ŧi������ܼ�*/
	
	printf("�п�J�n�I���`��:");
	scanf("%d",&num);/*��J�I���`�B*/
	/*�Q��²�檺�|�h�B��*/
	hundred=num/100;/*���ʤ��r*/
	fifty=(num-hundred*100)/50;/*��50���w��*/
	ten=(num-hundred*100-fifty*50)/10;/*��10���w��*/ 
	one=num-hundred*100-fifty*50-ten*10;/*��10���w��*/ 
	
	printf("-----------------------------------------\n");
	/*�e�X���j�u*/
	printf("�ʤ��r��%d�i,���Q�w������%d��,�Q���w����%d��,�@���w����%d��\n",hundred,fifty,ten,one);
	return 0;
}
