#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

#define SPACE 32 //空格鍵 旋轉 
#define LEFT  75 //左方向鍵 向左移動 
#define RIGHT 77 //右方向鍵 向右移動
#define DOWN 80 //下方向鍵 加速向下移動 
#define ESC 27 //Esc鍵 退出 
#define Wall 2 //圍墻 
#define Box 1 //方塊 
#define Kong 0 
#define FACE_X 30 //方塊長度 
#define FACE_Y 20 //方塊高度 

void start_game(); //游戲回圈 
void gotoxy(int x, int y); //設定游標位置 
void hidden_cursor(); //隱藏游標 
int color(int c); //設定顏色 
void init_face(); //初始化界面 
void init_dia(); //初始化方塊形狀 
void draw_dia(int base, int space_t, int x, int y); //畫方塊 
void draw_space(int base, int space_t, int x, int y); //畫空格 
int border(int n, int space_t, int x, int y); //邊界檢測 
int del(); //洗掉增加分數 
void read_file(); //讀入最高紀錄 
void write_file(); //寫入最高紀錄 

struct Face
{
    int data[FACE_X][FACE_Y + 10]; //為1是方塊,為0是空格
    int color[FACE_X][FACE_Y + 10];
}face;
typedef struct Diamonds
{
    int space[4][4]; //4*4矩陣,為1是方塊,為0是空格
}Dia;
Dia dia[7][4]; //一維表示7種形狀,二維表示旋轉次數

int grade = 0;
int max = 0;
int b = 0;

int main()
{
    system("cls");
    system("title 俄羅斯方塊");
    color(7);
    system("mode con cols=60 lines=30");
    hidden_cursor();
    srand(time(NULL));
    read_file();
    grade = 0;
    init_face();
    init_dia();
    b = rand() % 7;
    while (1)
        start_game();
    return 0;
}

void start_game()
{
    int n, ch, t = 0, x = 0, y = FACE_Y / 2 - 2, i, j;
    int space_t = 0;

    draw_space(b, space_t, 4, FACE_Y + 3);
    n = b;
    b = rand() % 7;
    color(b);
    draw_dia(b, space_t, 4, FACE_Y + 3);

    while (1)
    {
        color(n);
        draw_dia(n, space_t, x, y);
        if (t == 0)
            t = 20000;
        while (--t)
            if (kbhit() != 0)
                break;
        if (t == 0)
        {
            if (border(n, space_t, x + 1, y) == 1)
            {
                draw_space(n, space_t, x, y);
                x++;
            }
            else
            {
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        if (dia[n][space_t].space[i][j] == 1)
                        {
                            face.data[x + i][y + j] = 1;
                            face.color[x + i][y + j] = n;
                            while (del());
                        }
                    }
                }
                return;
            }
        }
        else
        {
            ch = getch();
            switch (ch)
            {
                case LEFT: {
                    if (border(n, space_t, x, y - 1) == 1)
                    {
                        draw_space(n, space_t, x, y);
                        y--;
                    }
                    break;
                }
                case RIGHT: {
                    if (border(n, space_t, x, y + 1) == 1)
                    {
                        draw_space(n, space_t, x, y);
                        y++;
                    }
                    break;
                }
                case DOWN: {
                    if (border(n, space_t, x + 1, y) == 1)
                    {
                        draw_space(n, space_t, x, y);
                        x++;
                    }
                    break;
                }
                case SPACE: {
                    if (border(n, (space_t + 1) % 4, x + 1, y) == 1)
                    {
                        draw_space(n, space_t, x, y);
                        space_t = (space_t + 1) % 4;
                    }
                    break;
                }
                case ESC: {
                    system("cls");
                    gotoxy(FACE_X / 2 - 2, FACE_Y);
                    printf("游戲結束!\n");
                    gotoxy(FACE_X / 2, FACE_Y);
                    printf("按任意鍵退出!\n");
                    getch();
                    system("cd ../&start game-menu.exe");
                    exit(0);
                    break;
                }
                case 'R':
                case 'r': {
                    main();
                    exit(0);
                }
                case 'S':
                case 's': {
                    while (1)
                        if (kbhit() != 0)
                            break;
                    break;
                }
            }
        }
    }
}

int border(int n, int space_t, int x, int y)
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (dia[n][space_t].space[i][j] == 0)
                continue;
            else if (face.data[x + i][y + j] == Wall || face.data[x + i][y + j] == Box)
                return 0;
        }
    }
    return 1;
}

int del()
{
    int i, j, k, sum;
    for (i = FACE_X - 2; i >= FACE_X - 6; i--)
    {
        sum = 0;
        for (j = 1; j < FACE_Y - 1; j++)
            sum += face.data[i][j];
        if (sum == 0)
            break;
        if (sum == FACE_Y - 2)
        {
            grade += 100;
            color(7);
            gotoxy(FACE_X - 4, 2 * FACE_Y + 2);
            printf("當前分數：%d", grade);
            for (j = 1; j < FACE_Y - 1; j++)
            {
                face.data[i][j] = Kong;
                gotoxy(i, 2 * j);
                printf("  ");
            }
            for (j = i; j > 1; j--)
            {
                sum = 0;
                for (k = 1; k < FACE_Y - 1; k++)
                {
                    sum += face.data[j - 1][k] + face.data[j][k];
                    face.data[j][k] = face.data[j - 1][k];
                    if (face.data[j][k] == Kong)
                    {
                        gotoxy(j, 2 * k);
                        printf("  ");
                    }
                    else
                    {
                        gotoxy(j, 2 * k);
                        color(face.color[j][k]);
                        printf("■");
                    }
                }
                if (sum == 0)
                    return 1;
            }
        }
    }
    for (i = 1; i < FACE_Y - 1; i++)
    {
        if (face.data[1][i] == Box)
        {
            char n;
            Sleep(800);
            system("cls");
            color(7);
            gotoxy(FACE_X / 2 - 2, 2 * (FACE_Y / 3));
            if (grade > max)
            {
                printf("恭喜您打破記錄，目前最高紀錄為：%d", grade);
                write_file();
            }
            else if (grade == max)
                printf("與紀錄持平，請突破你的極限！");
            else
                printf("請繼續努力，你與最高記錄只差：%d", max - grade);
            gotoxy(FACE_X / 2, 2 * (FACE_Y / 3));
            printf("GAME OVER!\n");
            do
            {
                gotoxy(FACE_X / 2 + 2, 2 * (FACE_Y / 3));
                printf("是否重新開始游戲(y/n): ");
                scanf("%c", &n);
                gotoxy(FACE_X / 2 + 4, 2 * (FACE_Y / 3));
                if (n != 'n' && n != 'N' && n != 'y' && n != 'Y')
                    printf("輸入錯誤，請重新輸入!");
                else
                    break;
            } while (1);
            if (n == 'n' || n == 'N')
            {
                gotoxy(FACE_X / 2 + 4, 2 * (FACE_Y / 3));
                system("cd ../&start 選單.exe&exit");
            }
            else if (n == 'y' || n == 'Y')
                main();
        }
    }
    return 0;
}

void read_file()
{
    FILE *fp;
    fp = fopen("俄羅斯方塊記錄.txt", "r+");
    if (fp == NULL)
    {
        fp = fopen("俄羅斯方塊記錄.txt", "w+");
        fwrite(&max, sizeof(int), 1, fp);
    }
    fseek(fp, 0, 0);
    fread(&max, sizeof(int), 1, fp);
    fclose(fp);
}

void write_file()
{
    FILE *fp;
    fp = fopen("俄羅斯方塊記錄.txt", "r+");
    fwrite(&grade, sizeof(int), 1, fp);
    fclose(fp);
}

void draw_space(int base, int space_t, int x, int y)
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            gotoxy(x + i, 2 * (y + j));
            if (dia[base][space_t].space[i][j] == 1)
                printf("  ");
        }
    }
}

void draw_dia(int base, int space_t, int x, int y)
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            gotoxy(x + i, 2 * (y + j));
            if (dia[base][space_t].space[i][j] == 1)
                printf("■");
        }
    }
}

void init_face()
{
    int i, j;

    for (i = 0; i < FACE_X; i++)
    {
        for (j = 0; j < FACE_Y + 10; j++)
        {
            if (j == 0 || j == FACE_Y - 1 || j == FACE_Y + 9)
            {
                face.data[i][j] = Wall;
                gotoxy(i, 2 * j);
                printf("■");
            }
            else if (i == FACE_X - 1)
            {
                face.data[i][j] = Box;
                gotoxy(i, 2 * j);
                printf("■");
            }
            else
                face.data[i][j] = Kong;
        }
    }

    gotoxy(FACE_X - 20, 2 * FACE_Y + 2);
    printf("左移：←");

    gotoxy(FACE_X - 18, 2 * FACE_Y + 2);
    printf("右移：→");

    gotoxy(FACE_X - 16, 2 * FACE_Y + 2);
    printf("下移：↓");

    gotoxy(FACE_X - 14, 2 * FACE_Y + 2);
    printf("旋轉：SPACE");

    gotoxy(FACE_X - 12, 2 * FACE_Y + 2);
    printf("暫停: S");

    gotoxy(FACE_X - 10, 2 * FACE_Y + 2);
    printf("退出: ESC");

    gotoxy(FACE_X - 8, 2 * FACE_Y + 2);
    printf("重新開始:R");

    gotoxy(FACE_X - 6, 2 * FACE_Y + 2);
    printf("最高紀錄:%d", max);

    gotoxy(FACE_X - 4, 2 * FACE_Y + 2);
    printf("當前分數：%d", grade);
}

void init_dia()
{
    int i, j, k, z;
    int b[4][4];
    for (i = 0; i < 3; i++)
        dia[0][0].space[1][i] = 1;
    dia[0][0].space[2][1] = 1; //凸形

    for (i = 1; i < 4; i++)
        dia[1][0].space[i][2] = 1;
    dia[1][0].space[1][1] = 1; //L形

    for (i = 1; i < 4; i++)
        dia[2][0].space[i][1] = 1;
    dia[2][0].space[1][2] = 1; //倒L形

    for (i = 0; i < 2; i++)
    {
        dia[3][0].space[1][i] = 1;
        dia[3][0].space[2][i + 1] = 1; //Z形

        dia[4][0].space[1][i + 1] = 1;
        dia[4][0].space[2][i] = 1; //倒Z形

        dia[5][0].space[1][i + 1] = 1;
        dia[5][0].space[2][i + 1] = 1; //方形
    }

    for (i = 0; i < 4; i++)
        dia[6][0].space[i][2] = 1; //直形 

    for (i = 0; i < 7; i++)
    {
        for (z = 0; z < 3; z++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 4; k++)
                {
                    b[j][k] = dia[i][z].space[j][k];
                }
            }
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 4; k++)
                {
                    dia[i][z + 1].space[j][k] = b[3 - k][j];
                }
            }
        }
    }
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hidden_cursor()
{
    CONSOLE_CURSOR_INFO cci;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
    cci.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

int color(int c)
{
    switch (c)
    {
    case 0: c = 9; break;
    case 1:
    case 2: c = 12; break;
    case 3:
    case 4: c = 14; break;
    case 5: c = 10; break;
    case 6: c = 13; break;
    default: c = 7; break;
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return 0;
}
