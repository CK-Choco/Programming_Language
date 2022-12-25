#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(vold)
{
	char m='a';
	int gamer;
	system("title 遊戲選單");
	do{
		printf("#\t遊戲選單\t#\n");
		printf("#########################\n");
        printf("#\tA:俄羅斯方塊\t#\n#\tB:猜拳遊戲\t#\n#\tC:數字地雷\t#\n#\tD:不玩了\t#\n");
        printf("#########################\n");
		scanf("%c%*c",&gamer);
        switch (gamer)
		{
			case 'A':
            case 'a':
                system("cls");
                system("cd ./俄羅斯方塊/&start 小遊戲.exe&exit");
                break;
            case 'B':
            case 'b':
                system("cls");
                system("cd ./猜拳遊戲/&start 猜拳遊戲.exe&exit");
                break;
            case 'C':
            case 'c':
            	system("cls");
                system("cd ./數字地雷/&start main.exe&exit");
                break;
            case 'D':
            case 'd':
            	system("timeout /t 5");//倒數計時，任一鍵跳過 
                return 0;
            default:
                printf("你的選擇為%c 選擇錯誤,退出...\n",gamer);
                getchar();
                system("cls"); // 清屏
                return 0;
                break;
		}
	}while(!m);
	return 0;
}
