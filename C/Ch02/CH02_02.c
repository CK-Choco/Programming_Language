/*sizeof�B��l������*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int my_variable=100;/*�ŧimy_variable����ƫ��A*/
	
	printf("my_variable����ƪ��� = %d �줸�� \n",sizeof my_variable);
	/*�i�H���[�A��*/
	printf("��ƫ��A����ƪ��� = %d �줸�� \n",sizeof(int));
	/*�����[�W�A��*/		
	
	return 0;
}
