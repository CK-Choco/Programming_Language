#include <stdio.h>
#include <stdlib.h>

int main(vold)
{
	
	/*定義*/
	int a;
	//char 是字元宣告 
	char b='Y'; 
	char c='N';
	/*界面*/ 
	printf("是否執行(Y/N):");
	/*
	%d(%i) 十進位制有符號整數
	%u 十進位制無符號整數
	%f 浮點數
	%s 字串
	%c 單個字元
	%p 指標的值
	%e 指數形式的浮點數
	%x, %X 無符號以十六進位制表示的整數
	%0 無符號以八進位制表示的整數
	%g 自動選擇合適的表示法
	*/ 
	scanf("%c",&a);
	/*處理邏輯*/ 
	if (a == b){
		printf("執行確認!\n");
	}
	if (a == c){
		printf("執行失敗!\n");
	}
	return 0;
}
