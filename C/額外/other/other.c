#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	
	/*�w�q*/
	int a;
	//char �O�r���ŧi 
	char b='Y'; 
	char c='N';
	/*�ɭ�*/ 
	printf("�O�_����(Y/N):");
	/*
	%d(%i) �Q�i���Ÿ����
	%u �Q�i���L�Ÿ����
	%f �B�I��
	%s �r��
	%c ��Ӧr��
	%p ���Ъ���
	%e ���ƧΦ����B�I��
	%x, %X �L�Ÿ��H�Q���i����ܪ����
	%0 �L�Ÿ��H�K�i����ܪ����
	%g �۰ʿ�ܦX�A����ܪk
	*/ 
	scanf("%c",&a);
	/*�B�z�޿�*/ 
	if (a == b){
		printf("����T�{!\n");
	}
	if (a == c){
		printf("���楢��!\n");
	}
	return 0;
}
