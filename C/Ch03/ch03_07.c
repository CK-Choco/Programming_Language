/*����B��l���ϥ�*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int math,physical;	/*�ŧi���ت�����ܼ�*/ 
	char chr_pass;		/*�ŧi��ܦX�檺�r���ܼ�*/ 
	
	printf("�п�J�ƾǻP���z���Z:");
	scanf("%d %d",&math,&physical);/*��J��즨�Z*/
	printf("�ƾ�=%d���P ���z=%d��\n",math,physical);
	(math >= 60 && physical >= 60)?(chr_pass='Y'):(chr_pass='N');
	/*�Q�α���B��l�ӧP�_��즨�Z�O�_���X��*/
	printf("�ӦW�ҥͬO�_���ή�?%c\n",chr_pass);
	/*��Xchr_pass�ܼƤ��e,��ܸӦҥͬO�_�X��*/
			
	return 0;
}
