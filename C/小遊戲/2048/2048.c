#include<stdio.h>
#include<conio.h> //�ϥ�getch()���
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
    printf("\t\t******************�C���W�h***************\n");
    printf("\t\t*****************************************\n");
    printf("\t\t*****************************************\t\t\n");
    printf("���a�i�H��ܤW�B�U�B���B�k��W�BA�BS�BD�h���ʷƶ�\n");
    printf("���a��ܪ���V�W�Y���ۦP���Ʀr�h�X��\n");
    printf("�X�֩ұo���Ҧ��s�ͦ��Ʀr�ۥ[�Y���ӨB�����ıo��\n");
    printf("���a��ܪ���V��ΦC�e�観�Ů�h�X�{�첾\n");
    printf("�C���ʤ@�B�A�Ŧ��H���X�{�@��2��4\n");
    printf("�ѽL�Q�Ʀr�񺡡A�L�k�i�榳�Ĳ��ʡA�P�t�A�C������\n");
    printf("�ѽL�W�X�{2048�A��ӡA�C������\n");
    printf("���W�U���k�h���ʷƶ�\n");
    printf("�Ы����N���^�D���...\n");
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
    printf("�A�����Z�G%d,���ʤF%d�B\n", score,move);
    printf("�Ы����N���^�D���...\n");
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
    printf("�A�����Z�G%d,���ʤF%d�B\n", score,move);
    printf("�Ы����N���^�D���...\n");
    getch();
    system("cls");
    main();
}
void prin()
{
    int i, j;
    system("cls");
    printf("\t\t*****************************************\t\t\n");//��X�ɭ�
    printf("\t\t*****************************************\n");
    printf("\t\t******************�C���}�l***************\n");
    printf("\t\t*****************************************\n");
    printf("\t\t*****************************************\t\t\n");
    printf("\t\t �Ы���V���W�BA�BS�BD���ʷƶ�\n");//��X�ާ@���ܻy�y
    printf("\t\t ��ESC��^�ܥD���\n");
    printf("\t\t\t---------------------\n\t\t\t");
    for (j = 0; j<4; j++) //��X4*4�����
    {
        for (i = 0; i<4; i++)
            if (num[j][i] == 0)
                printf("|    ");
            else
                printf("|%4d", num[j][i]);
        printf("|\n");
        printf("\t\t\t---------------------\n\t\t\t");
    }
    printf("�A�����Z�G%d�A���ʤF%d�B\n", score,move);//��X�o���M���ʨB��
}
void appear()
{
    int i, j,ran,t[16],x=0,a,b;
    srand((int)time(0)); //�H���ؤl��l��
    for (j = 0; j < 4; j++) //�N�ťժ��ϰ쪺���ЫO�s�줤���Ʋ�t��
        for (i = 0; i < 4;i++)
            if (num[j][i] == 0)
            {
                t[x] = j * 10 + i;
                x++;
            }
    if (x == 1) //�bt���H�����@�ӧ���
        ran = x - 1;
    else
        ran = rand() % (x - 1);
    a = t[ran] / 10; //���X�o�ӼƭȪ��Q���
    b = t[ran] % 10; //���X�o�ӼƭȪ��Ӧ��
    srand((int)time(0));
    if ((rand() % 9)>2) //�b���ťհϰ��H�����2��4
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
    printf("\t\t*****************************************\t\t\n"); //��X�C����檺�ϧ�
    printf("\t\t| 1�B�}�l�C��				|\n");
    printf("\t\t| 2�B�C���W�h				|\n");
    printf("\t\t| 3�B�h�X�C��				|\n");
    printf("\t\t*****************************************\n");
    printf("\t\t�п�J1��2��3:[ ]\b\b");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        Gameplay(); //�C���}�l���
        break;
    case 2:
        explation(); //�C���W�h���
        break;
    case 3:
        close(); //�����C�����
        break;
    }
}
int main()
{
	system("title 2048 �|���|����");
    int j, i;
    for (j = 0; j < 4; j++) //��4*4�i���l��Ȭ�0
        for (i = 0; i < 4; i++)
            num[j][i] = 0;
    gamew = 0; //�C����Ӫ��P�_�ܶq��l��
    gamef = 0; //�C�����Ѫ��P�_�ܶq��l��
    ifappear = 0; //�P�_�O�_�����H���X�{2��4���ܶq��l��
    score = 0; //�C���o���ܶq��l��
    gameover = 0; //�C���O�_�������ܶq��l��
    move = 0; //�C�������ʨB�ƪ�l��
    menu(); //�եΥD�����
    return 0;
}
