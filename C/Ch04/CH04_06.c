/*���Ƹs�էP�_*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;/*�ŧich�r���ܼ�*/
	
	printf("A,B,C,D,E\n");
	printf("�п�J���Ƹs��:");
	
	scanf("%c",&ch);/*��J�r���ܼ�ch*/
	/*switch ����ԭz�}�l*/
	switch(ch)
	{
		/*���B���Τj�A��*/
		case'A':
		case'a':/*��J�j�g�Τp�g�r�����i*/
			printf("���Ʀb90���H�W!\n");
			break;	
		case'B':
		case'b':/*��J�j�g�Τp�g�r�����i*/
			printf("���Ʀb80���H�W!\n");
			break;
		case'C':
		case'c':/*��J�j�g�Τp�g�r�����i*/
			printf("���Ʀb70���H�W!\n");
		case'D':
		case'd':/*��J�j�g�Τp�g�r�����i*/
			printf("���Ʀb60���H�W!\n");
			break;	
			break;	
		case'E':
		case'e':/*��J�j�g�Τp�g�r�����i*/
			printf("�A�Q���F!\n");
			break;
		default:/*��L�r���h����default���O*/
			printf("�S�������Ƹs��\n");
			break;					
	}  
	
	return 0;
}
