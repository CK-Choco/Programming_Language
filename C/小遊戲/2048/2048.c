#include<stdio.h>
#include<conio.h> //使用getch()函數
#include<time.h>
#include <stdlib.h>
int num[4][4];
int score, gameover, ifappear, gamew, gamef,move;
char key;
void explation()
{
    void menu();
    system("cls");
    printf("\t\t*****************************************\t\t\n");
    printf("\t\t*****************************************\n");
    printf("\t\t******************遊戲規則***************\n");
    printf("\t\t*****************************************\n");
    printf("\t\t*****************************************\t\t\n");
    printf("玩家可以選擇上、下、左、右或W、A、S、D去移動滑塊\n");
    printf("玩家選擇的方向上若有相同的數字則合併\n");
    printf("合併所得的所有新生成數字相加即為該步的有效得分\n");
    printf("玩家選擇的方向行或列前方有空格則出現位移\n");
    printf("每移動一步，空位隨機出現一個2或4\n");
    printf("棋盤被數字填滿，無法進行有效移動，判負，遊戲結束\n");
    printf("棋盤上出現2048，獲勝，遊戲結束\n");
    printf("按上下左右去移動滑塊\n");
    printf("請按任意鍵返回主菜單...\n");
    getch();
    system("cls");
    main();
}
void gamefaile()
{
    int i, j;
    system("cls");
    printf("\t\t*****************************************\t\t\n");
    printf("\t\t*****************************************\n");
    printf("\t\t******************you fail***************\n");
    printf("\t\t*****************************************\n");
    printf("\t\t*****************************************\t\t\n");
    printf("\t\t\t---------------------\n\t\t\t");
    for (j = 0; j<4; j++)
    {
        for (i = 0; i<4; i++)
            if (num[j][i] == 0)
                printf("| ");
            else
                printf("|%4d", num[j][i]);
        printf("|\n");
        printf("\t\t\t---------------------\n\t\t\t");
    }
    printf("你的成績：%d,移動了%d步\n", score,move);
    printf("請按任意鍵返回主菜單...\n");
    getch();
    system("cls");
    main();
 
}
void gamewin()
{
    int i, j;
    system("cls");
    printf("\t\t*****************************************\t\t\n");
    printf("\t\t*****************************************\n");
    printf("\t\t*******************you win***************\n");
    printf("\t\t*****************************************\n");
    printf("\t\t*****************************************\t\t\n");
    printf("\t\t\t---------------------\n\t\t\t");
    for (j = 0; j<4; j++)
    {
        for (i = 0; i<4; i++)
            if (num[j][i] == 0)
                printf("| ");
            else
                printf("|%4d", num[j][i]);
        printf("|\n");
        printf("\t\t\t---------------------\n\t\t\t");
    }
    printf("你的成績：%d,移動了%d步\n", score,move);
    printf("請按任意鍵返回主菜單...\n");
    getch();
    system("cls");
    main();
}
void prin()
{
    int i, j;
    system("cls");
    printf("\t\t*****************************************\t\t\n");//輸出界面
    printf("\t\t*****************************************\n");
    printf("\t\t******************遊戲開始***************\n");
    printf("\t\t*****************************************\n");
    printf("\t\t*****************************************\t\t\n");
    printf("\t\t 請按方向鍵或W、A、S、D移動滑塊\n");//輸出操作提示語句
    printf("\t\t 按ESC返回至主菜單\n");
    printf("\t\t\t---------------------\n\t\t\t");
    for (j = 0; j<4; j++) //輸出4*4的表格
    {
        for (i = 0; i<4; i++)
            if (num[j][i] == 0)
                printf("|    ");
            else
                printf("|%4d", num[j][i]);
        printf("|\n");
        printf("\t\t\t---------------------\n\t\t\t");
    }
    printf("你的成績：%d，移動了%d步\n", score,move);//輸出得分和移動步數
}
void appear()
{
    int i, j,ran,t[16],x=0,a,b;
    srand((int)time(0)); //隨機種子初始化
    for (j = 0; j < 4; j++) //將空白的區域的坐標保存到中間數組t中
        for (i = 0; i < 4;i++)
            if (num[j][i] == 0)
            {
                t[x] = j * 10 + i;
                x++;
            }
    if (x == 1) //在t中隨機取一個坐標
        ran = x - 1;
    else
        ran = rand() % (x - 1);
    a = t[ran] / 10; //取出這個數值的十位數
    b = t[ran] % 10; //取出這個數值的個位數
    srand((int)time(0));
    if ((rand() % 9)>2) //在此空白區域隨機賦值2或4
        num[a][b] = 2;
    else
        num[a][b] = 4;
}
void close()
{
    exit(0);
}
void add(int *p)
{
     
    int i=0, b;
    while (i<3)
    {
        if (*(p + i) != 0)
        {
            for (b = i + 1; b < 4; b++)
            {
                if (*(p + b) != 0)
                    if (*(p + i) == *(p + b))
                    {
                    score = score + (*(p + i)) + (*(p + b));
                    *(p + i) = *(p + i) + *(p + b);
                    if (*(p + i) == 2048)
                        gamew = 1;
                    *(p + b) = 0;
                    i = b + i;
                    ++ifappear;
                    break;
                    }
                    else
                    {
                        i = b;
                        break;
                    }
            }
            if (b == 4)
                i++;
        }
        else
            i++;
    }
 
}
void Gameplay()
{
    int i, j, g, e, a, b[4];
    appear();
    appear();
    while (1)
    {
        if (ifappear!=0)
            appear();
        prin();
        key = getch();
        switch (key)
        {
        case 'w':
        case 'W':
        case 72:
            ifappear = 0;
            for (j = 0; j < 4; j++)
            {
                for (i = 0; i < 4; i++)
                {
                    b[i] = num[i][j];
                    num[i][j] = 0;
                }
                add(b);
                e = 0;
                for (g = 0; g < 4; g++)
                {
                    if (b[g] != 0)
                    {
                        num[e][j] = b[g];
                        if (g != e)
                            ++ifappear;
                        e++;
                    }
                }
            }
            if (ifappear!=0)
                ++move;
        break;
        case 's':
        case 'S':
        case 80:
            ifappear = 0;
            for (j = 0; j < 4; j++)
            {
                for (i = 0; i < 4; i++)
                {
                    b[i] = num[i][j];
                    num[i][j] = 0;
                }
                add(b);
                e = 3;
                for (g = 3; g>=0; g--)
                {
                    if (b[g] != 0)
                    {
                        num[e][j] = b[g];
                        if (g != e)
                            ++ifappear;
                        e--;
                    }
                }
            }
            if (ifappear != 0)
                ++move;
        break;
        case 'a':
        case 'A':
        case 75:
            ifappear = 0;
            for (j = 0; j < 4; j++)
            {
                for (i = 0; i < 4; i++)
                {
                    b[i] = num[j][i];
                    num[j][i] = 0;
                }
                add(b);
                e = 0;
                for (g = 0; g < 4; g++)
                {
                    if (b[g] != 0)
                    {
                        num[j][e] = b[g];
                        if (g!=e)
                            ++ifappear;
                        e++;
                    }
                }
            }
            if (ifappear != 0)
                ++move;
        break;
        case 'd':
        case 'D':
        case 77:
            ifappear = 0;
            for (j = 0; j < 4; j++)
            {
                for (i = 0; i < 4; i++)
                {
                    b[i] = num[j][i];
                    num[j][i] = 0;
                }
                add(b);
                e = 3;
                for (g = 3; g >=0; g--)
                {
                    if (b[g] != 0)
                    {
                        num[j][e] = b[g];
                        if (g!=e)
                            ++ifappear;
                        e--;
                    }
                }
            }
            if (ifappear != 0)
                ++move;
        break;
        case 27:
            system("cls");
            main();
            break;
 
        }
        for (j = 0; j < 4; j++)
        {
            for (i = 0; i < 4; i++)
            {
                if (j < 3)
                {
                    if (i < 3)
                    {
                        if (num[j][i] == num[j + 1][i] || num[j][i] == num[j][i + 1] || num[j][i] == 0)
                        {
                            gamef = 0;
                            break;
                        }
                        else
                            gamef = 1;
                    }
                    else
                    {
                        if (num[j][i] == num[j + 1][i] || num[j][i] == 0)
                        {
                            gamef = 0;
                            break;
                        }
                        else
                            gamef = 1;
                    }
                }
                else
                {
                    if (i < 3)
                    {
                        if (num[j][i] == num[j][i + 1] || num[j][i] == 0 || num[j][i + 1] == 0)
                        {
                            gamef = 0;
                            break;
                        }
                        else
                            gamef = 1;
                    }
                }
 
            }
            if (gamef == 0)
                break;
        }
        if (gamef == 1 || gamew == 1)
            break;
 
    }
    if (gamef == 1)
        gamefaile();
    else
        gamewin();
}
void menu()
{
    int n;
    printf("\t\t*****************************************\t\t\n"); //輸出遊戲菜單的圖形
    printf("\t\t| 1、開始遊戲				|\n");
    printf("\t\t| 2、遊戲規則				|\n");
    printf("\t\t| 3、退出遊戲				|\n");
    printf("\t\t*****************************************\n");
    printf("\t\t請輸入1或2或3:[ ]\b\b");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        Gameplay(); //遊戲開始函數
        break;
    case 2:
        explation(); //遊戲規則函數
        break;
    case 3:
        close(); //關閉遊戲函數
        break;
    }
}
int main()
{
	system("title 2048 四乘四版本");
    int j, i;
    for (j = 0; j < 4; j++) //對4*4進行初始賦值為0
        for (i = 0; i < 4; i++)
            num[j][i] = 0;
    gamew = 0; //遊戲獲勝的判斷變量初始化
    gamef = 0; //遊戲失敗的判斷變量初始化
    ifappear = 0; //判斷是否應該隨機出現2或4的變量初始化
    score = 0; //遊戲得分變量初始化
    gameover = 0; //遊戲是否結束的變量初始化
    move = 0; //遊戲的移動步數初始化
    menu(); //調用主菜單函數
    return 0;
}
