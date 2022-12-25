#include <iostream>
#include <conio.h>
using namespace std;

void menu();
void add();
void sub();
void mul();
void div();
void showErrMsg();
void showContMsg();

//-------------------------------
int main()
{
    int sel;
    string str;

    while (true)
    {
        menu();  //��ܿ��
        cin >> str;

        try
        {
            sel = atoi(str.c_str());
            if (sel < 1 || sel>5)
            {
                showErrMsg();
                continue;
            }
        }
        catch(...)
        {
            showErrMsg();
            continue;
        }
            
        switch (sel)
        {
            case 1: add(); //��Ƭۥ[
                break;

            case 2: sub(); //��Ƭ۴�
                break;

            case 3: mul();  //��Ƭۭ�
                break;

            case 4: div(); //��Ƭ۰�
                break;

            case 5:
                exit(0); //����
                break;
        }
    }    
    
    system("pause");
}

//------------------------------
void menu()
{
    system("cls");

    cout << "1. ��Ƭۥ[" << endl;
    cout << "2. ��Ƭ۴�" << endl;
    cout << "3. ��Ƭۭ�" << endl;
    cout << "4. ��Ƭ۰�" << endl;
    cout << "5. ����" << endl;
    cout << "------------" << endl;
    cout << "��J�ﶵ(1-5)�G";
}
//----------------------------
void add()
{
    int a, b, c;

    cout << "��J�ۥ[�����(�ϥΪťչj�})�G";
    cin >> a >> b;
    c = a + b;

    cout << a << "+" << b << "= " << c << endl;
    showContMsg();
}

//----------------------------
void sub()
{
    int a, b, c;

    cout << "��J�۴���(�ϥΪťչj�})�G";
    cin >> a >> b;
    c = a - b;

    cout << a << "-" << b << "= " << c << endl;
    showContMsg();
}

//----------------------------
void mul()
{
    int a, b, c;

    cout << "��J�ۭ������(�ϥΪťչj�})�G";
    cin >> a >> b;
    c = a * b;

    cout << a << "*" << b << "= " << c << endl;
    showContMsg();
}

//----------------------------
void div()
{
    int a, b;
    float c;

    cout << "��J�۰������(�ϥΪťչj�})�G";
    cin >> a >> b;
    c = (float)a / (float)b;

    cout << a << "/" << b << "= " << c << endl;
    showContMsg();
}

//------------------------------
void showErrMsg()
{
    cout << "��J���~�A�����~��...";
    while (!_kbhit());    
}

//------------------------------
void showContMsg()
{
    cout << "�����~��..." << endl;
    while (!_kbhit());
}