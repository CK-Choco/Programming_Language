/*�r���ŧi��@*/ 
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	
	char char1='a';	/*�ŧi�r���ܼƻP�]�w�Ȭ�'a'*/ 
	char char2=88;	/*�ŧi�r���ܼƻP�]�w�Ȭ�ASCII�X��88*/ 
	
	/*��Xchar1�r���ܼƩM����ASCII�X*/ 
	printf("char1=%c ��ASCII�X=%d\n",char1,char1);
	/*��Xchar2�r���ܼƩM����ASCII�X*/ 
	printf("char2=%c ��ASCII�X=%d\n",char2,char2);
	
	char1=char1+10;	/*�r���ܼ�char1���[�k�B��\��*/ 
	printf("char1=%c ��ASCII�X=%d\n",char1,char1);
	/*��X�[�k�B��᪺�r���MASCII�X*/ 
	char2=char2-32;/*�r���ܼ�char2����k�B��\��*/ 
	printf("char2=%c ��ASCII�X=%d\n",char2,char2);
	/*��X��k�B��᪺�r���MASCII�X*/ 
	
	return 0;
}
