#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fun1(); //宣告函數 
void list();
int main(vold){
	int a;
	char b='Y&&y'; 
	char c='N&&n';
	char e='I&&i';
	while(1){
		system("cls");
		printf("Y:執行 N:取消 I:list\n");
		printf("是否執行(Y/N/I):");
		scanf("%c",&a);
		if (a == b){
			printf("執行確認!\n");
			fun1();	//呼叫函數	
		}
		if (a == c){
			printf("執行取消!\n");
			break;
		}
		if (a == e){
			list();
		}
	}
	return 0;
}
void list()
{
	printf("%%之後的字母");
	printf("\n");
	printf("  c |輸出字元");
	printf("\n");
	printf("  s |輸出字串資料");
	printf("\n");
	printf(" ld |輸出長整數");
	printf("\n");
	printf("  d |輸出十進位整數");
	printf("\n");
	printf("  u |輸出不含符號的十進位整數值。");
	printf("\n");
	printf("  o |輸出八進位數。");
	printf("\n");
	printf("  x |輸出十六進位數，超過10的數字以小寫字母表示。");
	printf("\n");
	printf("  X |輸出十六進位數，超過10的數字以大寫字母表示。");
	printf("\n");
	printf("  f |輸出浮點數。");
	printf("\n");
	printf("  e |使用科學記號表示法，例如3.14e+05(使用小寫e)。");
	printf("\n");
	printf("  E |使用科學記號表示法，例如3.14E+05(使用大寫E)。");
	printf("\n");
	printf("g/G |輸出浮點數，不過是輸出%%e與%%f長度較高短者。");
	printf("\n");
	printf("  p |輸出指標數值，依系統位元數決定輸出數值長度。");
	printf("\n");
	system("pause");
}
void fun1() //函數 
{
	int cnt;
	int hour = 0, min = 0, sec = 0;
	time_t time_sec = 0;
	time_t old_sec = 0;
	printf("請設定計時時間——時 分 秒\n");
	scanf("%d%d%d", &hour, &min, &sec);
	time(&time_sec);              //獲取當前秒數（1970-1-1 00:00:00到現在）
	printf("倒計時——%02d:%02d:%02d\r", hour, min, sec);
	old_sec = time_sec;           //更新舊的秒數
	while(hour > 0 || min > 0 || sec > 0)
	{
	    time(&time_sec);          //獲取秒數儲存到time_t變數
	    if(time_sec != old_sec)   //如果秒數改變（計時達到1秒）
	    {
	        old_sec = time_sec;   //更新舊的秒數
	        if(sec > 0)
	            sec--;            //計時秒數減1
	        else
	        {
	            sec = 59;         //如果原秒數為0，則變為59
	            if(min > 0)
	                min--;        //計時分鐘減1
	            else
	            {
	                min = 59;     //如果分鐘數為0，則變為59
	                hour--;       //計時小時數減1
	            }
	        }
	        printf("倒計時——%02d:%02d:%02d\r", hour, min, sec);
	    }
	}
	puts("\n計時結束\n");
	printf("虫合\n");
	system("pause");
}


