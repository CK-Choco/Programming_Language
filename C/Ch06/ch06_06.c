/*字元與字串比較*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch='a';/*宣告字元變數ch*/ 
	char Str0[]="a";/*宣告字串變數str0*/
	/*三種正確的字串宣告方式*/
	char Str1[6]="Hello";
	char Str2[6]={'H','e','l','l','o','\0'};
	char Str3[ ]="Hello";
	
	printf("ch佔用空間:%d位元 字元ch的內容:%c\n",sizeof(ch),ch);
	printf("Str0佔用空間:%d位元 字串Str0的內容:%s\n",sizeof(Str0),Str0);
	printf("Str1佔用空間:%d位元 字串Str1的內容:%s\n",sizeof(Str1),Str1);
	printf("Str2佔用空間:%d位元 字串Str2的內容:%s\n",sizeof(Str2),Str2);
	printf("Str3佔用空間:%d位元 字串Str3的內容:%s\n",sizeof(Str3),Str3);
	
	/*輸出字串與字元陣列的空間與內容*/
	 
	return 0;
}
