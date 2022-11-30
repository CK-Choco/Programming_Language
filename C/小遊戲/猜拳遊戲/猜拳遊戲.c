//預加載 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//部分字體改顏色 
void color(short x)
{
    if (x >= 0 && x <= 15)//參數在0-15的範圍顏色 
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//只有一個參數，改變字體顏色 
    else//默認白色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}

int main()
{
	system("title 猜拳遊戲");
    char gamer; // 玩家出拳
    int computer; // 電腦出拳
    int result; // 比賽結果

    // 為了避免玩一次遊戲就退出程序，可以將代碼放在循環中
    while (1){
        color(10);
		printf("這是一個猜拳的小遊戲，請輸入你要出的拳頭：\n");
        color(6);printf("A:剪刀\nB:石頭\nC:布\nD:不玩了\n");color(7);
        scanf("%c%*c",&gamer);
        switch (gamer){
            case 'A':
            case 'a':
                gamer=4;
                break;
            case 'B':
            case 'b':
                gamer=7;
                break;
            case 'C':
            case 'c':
                gamer=10;
                break;
            case 'D':
            case 'd':
                return 0;
          
            default:
                printf("你的選擇為%c 選擇錯誤,退出...\n",gamer);
                getchar();
                system("cls"); // 清屏
                return 0;
                break;
        }
      
        srand((unsigned)time(NULL)); // 隨機數種子
        computer=rand()%3; // 產生隨機數並取餘，得到電腦出拳
        result=(int)gamer+computer; // gamer 為char 類型，數學運算時要強制轉換類型
        printf("電腦出了");
        switch (computer)
        {
            case 0:printf("剪刀\n");break; //4 1
            case 1:printf("石頭\n");break; //7 2
            case 2:printf("布\n");break; //10 3
        }
        printf("你出了");
        switch (gamer)
        {
            case 4:printf("剪刀\n");break;
            case 7:printf("石頭\n");break;
            case 10:printf("布\n");break;
        }
        if (result==6||result==7||result==11) printf("你贏了!");
        else if (result==5||result==9||result==10) printf("電腦贏了!");
        else printf("平手");
        system("pause>nul&&cls"); // 暫停並清屏
    }
    return 0;
}
