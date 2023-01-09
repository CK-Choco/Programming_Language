#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

#define SPACE 32 //�Ů��� ���� 
#define LEFT  75 //����V�� �V������ 
#define RIGHT 77 //�k��V�� �V�k����
#define DOWN 80 //�U��V�� �[�t�V�U���� 
#define ESC 27 //Esc�� �h�X 
#define Wall 2 //���� 
#define Box 1 //��� 
#define Kong 0 
#define FACE_X 30 //������� 
#define FACE_Y 20 //������� 

void start_game(); //�����^�� 
void gotoxy(int x, int y); //�]�w��Ц�m 
void hidden_cursor(); //���ô�� 
int color(int c); //�]�w�C�� 
void init_face(); //��l�Ƭɭ� 
void init_dia(); //��l�Ƥ���Ϊ� 
void draw_dia(int base, int space_t, int x, int y); //�e��� 
void draw_space(int base, int space_t, int x, int y); //�e�Ů� 
int border(int n, int space_t, int x, int y); //����˴� 
int del(); //�~���W�[���� 
void read_file(); //Ū�J�̰����� 
void write_file(); //�g�J�̰����� 

struct Face
{
    int data[FACE_X][FACE_Y + 10]; //��1�O���,��0�O�Ů�
    int color[FACE_X][FACE_Y + 10];
}face;
typedef struct Diamonds
{
    int space[4][4]; //4*4�x�},��1�O���,��0�O�Ů�
}Dia;
Dia dia[7][4]; //�@�����7�اΪ�,�G����ܱ��স��

int grade = 0;
int max = 0;
int b = 0;

int main()
{
    system("cls");
    system("title �Xù�����");
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
                    printf("��������!\n");
                    gotoxy(FACE_X / 2, FACE_Y);
                    printf("�����N��h�X!\n");
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
            printf("��e���ơG%d", grade);
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
                        printf("��");
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
                printf("���߱z���}�O���A�ثe�̰��������G%d", grade);
                write_file();
            }
            else if (grade == max)
                printf("�P���������A�Ь�}�A�������I");
            else
                printf("���~��V�O�A�A�P�̰��O���u�t�G%d", max - grade);
            gotoxy(FACE_X / 2, 2 * (FACE_Y / 3));
            printf("GAME OVER!\n");
            do
            {
                gotoxy(FACE_X / 2 + 2, 2 * (FACE_Y / 3));
                printf("�O�_���s�}�l����(y/n): ");
                scanf("%c", &n);
                gotoxy(FACE_X / 2 + 4, 2 * (FACE_Y / 3));
                if (n != 'n' && n != 'N' && n != 'y' && n != 'Y')
                    printf("��J���~�A�Э��s��J!");
                else
                    break;
            } while (1);
            if (n == 'n' || n == 'N')
            {
                gotoxy(FACE_X / 2 + 4, 2 * (FACE_Y / 3));
                system("cd ../&start ���.exe&exit");
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
    fp = fopen("�Xù������O��.txt", "r+");
    if (fp == NULL)
    {
        fp = fopen("�Xù������O��.txt", "w+");
        fwrite(&max, sizeof(int), 1, fp);
    }
    fseek(fp, 0, 0);
    fread(&max, sizeof(int), 1, fp);
    fclose(fp);
}

void write_file()
{
    FILE *fp;
    fp = fopen("�Xù������O��.txt", "r+");
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
                printf("��");
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
                printf("��");
            }
            else if (i == FACE_X - 1)
            {
                face.data[i][j] = Box;
                gotoxy(i, 2 * j);
                printf("��");
            }
            else
                face.data[i][j] = Kong;
        }
    }

    gotoxy(FACE_X - 20, 2 * FACE_Y + 2);
    printf("�����G��");

    gotoxy(FACE_X - 18, 2 * FACE_Y + 2);
    printf("�k���G��");

    gotoxy(FACE_X - 16, 2 * FACE_Y + 2);
    printf("�U���G��");

    gotoxy(FACE_X - 14, 2 * FACE_Y + 2);
    printf("����GSPACE");

    gotoxy(FACE_X - 12, 2 * FACE_Y + 2);
    printf("�Ȱ�: S");

    gotoxy(FACE_X - 10, 2 * FACE_Y + 2);
    printf("�h�X: ESC");

    gotoxy(FACE_X - 8, 2 * FACE_Y + 2);
    printf("���s�}�l:R");

    gotoxy(FACE_X - 6, 2 * FACE_Y + 2);
    printf("�̰�����:%d", max);

    gotoxy(FACE_X - 4, 2 * FACE_Y + 2);
    printf("��e���ơG%d", grade);
}

void init_dia()
{
    int i, j, k, z;
    int b[4][4];
    for (i = 0; i < 3; i++)
        dia[0][0].space[1][i] = 1;
    dia[0][0].space[2][1] = 1; //�Y��

    for (i = 1; i < 4; i++)
        dia[1][0].space[i][2] = 1;
    dia[1][0].space[1][1] = 1; //L��

    for (i = 1; i < 4; i++)
        dia[2][0].space[i][1] = 1;
    dia[2][0].space[1][2] = 1; //��L��

    for (i = 0; i < 2; i++)
    {
        dia[3][0].space[1][i] = 1;
        dia[3][0].space[2][i + 1] = 1; //Z��

        dia[4][0].space[1][i + 1] = 1;
        dia[4][0].space[2][i] = 1; //��Z��

        dia[5][0].space[1][i + 1] = 1;
        dia[5][0].space[2][i + 1] = 1; //���
    }

    for (i = 0; i < 4; i++)
        dia[6][0].space[i][2] = 1; //���� 

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
