/*�r���P�r����*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch='a';/*�ŧi�r���ܼ�ch*/ 
	char Str0[]="a";/*�ŧi�r���ܼ�str0*/
	/*�T�إ��T���r��ŧi�覡*/
	char Str1[6]="Hello";
	char Str2[6]={'H','e','l','l','o','\0'};
	char Str3[ ]="Hello";
	
	printf("ch���ΪŶ�:%d�줸 �r��ch�����e:%c\n",sizeof(ch),ch);
	printf("Str0���ΪŶ�:%d�줸 �r��Str0�����e:%s\n",sizeof(Str0),Str0);
	printf("Str1���ΪŶ�:%d�줸 �r��Str1�����e:%s\n",sizeof(Str1),Str1);
	printf("Str2���ΪŶ�:%d�줸 �r��Str2�����e:%s\n",sizeof(Str2),Str2);
	printf("Str3���ΪŶ�:%d�줸 �r��Str3�����e:%s\n",sizeof(Str3),Str3);
	
	/*��X�r��P�r���}�C���Ŷ��P���e*/
	 
	return 0;
}
