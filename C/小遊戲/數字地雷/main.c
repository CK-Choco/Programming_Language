#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc, char** argv)
{
	char ch;
	printf("A 開始遊戲\n");
	printf("B 離開遊戲\n");
	printf("是否開始遊戲:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
			fun1();
		case 'B':
		case 'b':
			printf("Exit...");
			break;
		case 'o':
		case 'O':
			login();
	}
}
void fun1()/*主程序*/
{
	int mysteryNumber = 0, guessNumber = 0;
    const int MAX = 1000, MIN = -1000;
    // 隨機生成地雷 
    srand(time(NULL));
    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
    /* 未找到數字地雷，繼續尋找 */
    do
    {
        // 請求玩家輸入猜數 
        printf("數字地雷的數字是:");
        scanf("%d", &guessNumber);
        // 比較玩家猜數和地雷 
        if (mysteryNumber > guessNumber)
            printf("%d 猜小了 !\n\n",guessNumber);
        else if (mysteryNumber < guessNumber)
            printf("%d 猜大了 !\n\n",guessNumber);
        else
            printf ("太棒了，你猜到了數字地雷 !!\n\n");
    } while (guessNumber != mysteryNumber);
    return 0;
}/*函數的主體內容*/
void login()
{
	system("cls");/*清除畫面*/
	int eadminname,eadminpass;
	char adminname[5]="admin";
	char adminpass[5]="admin";
	printf("輸入帳號:");
	scanf("%s",&eadminname);
	eadminname == adminname;
	printf("輸入密碼:");
	scanf("%s",&eadminpass);
	char pess[5] = "eadminpass";
	eadminpass == adminpass;
	user();
}
void user()
{
	system("cls");
	printf("密碼確認\n歡迎Admin進入後台\n");
}
