/*²�����p����s�@*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,b;	/*�ŧia,b���B�I���ܼ�*/
	char op_key;/*�ŧiop_key���r���ܼ�*/
	
	printf("�п�J��ӯB�I�ƼƦr�P+,-,*,/,�p200*30\n");
	
	scanf("%f %c %f",&a,&op_key,&b);/*��J�r���æs�J�ܼ�op_key*/
	
	switch(op_key)
	{
		case'+':/*�p�Gop_key����'+'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a+b);
			break;/*���Xawitch*/
		case'-':/*�p�Gop_key����'-'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a-b);
			break;/*���Xawitch*/			
		case'*':/*�p�Gop_key����'*'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a*b);
			break;/*���Xawitch*/			
		case'/':/*�p�Gop_key����'/'*/
			printf("\n%.2f %c %.2f = %.2f\n",a,op_key,b,a/b);
			break;/*���Xawitch*/			
		default:	/*�p�Gop_key������ + - * /����@��*/
			printf("�B�⦡���~\n"); 		
	} 
	
	return 0;
}
