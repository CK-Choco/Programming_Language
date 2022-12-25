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
        menu();  //顯示選單
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
            case 1: add(); //兩數相加
                break;

            case 2: sub(); //兩數相減
                break;

            case 3: mul();  //兩數相乘
                break;

            case 4: div(); //兩數相除
                break;

            case 5:
                exit(0); //結束
                break;
        }
    }    
    
    system("pause");
}

//------------------------------
void menu()
{
    system("cls");

    cout << "1. 兩數相加" << endl;
    cout << "2. 兩數相減" << endl;
    cout << "3. 兩數相乘" << endl;
    cout << "4. 兩數相除" << endl;
    cout << "5. 結束" << endl;
    cout << "------------" << endl;
    cout << "輸入選項(1-5)：";
}
//----------------------------
void add()
{
    int a, b, c;

    cout << "輸入相加的兩數(使用空白隔開)：";
    cin >> a >> b;
    c = a + b;

    cout << a << "+" << b << "= " << c << endl;
    showContMsg();
}

//----------------------------
void sub()
{
    int a, b, c;

    cout << "輸入相減的兩數(使用空白隔開)：";
    cin >> a >> b;
    c = a - b;

    cout << a << "-" << b << "= " << c << endl;
    showContMsg();
}

//----------------------------
void mul()
{
    int a, b, c;

    cout << "輸入相乘的兩數(使用空白隔開)：";
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

    cout << "輸入相除的兩數(使用空白隔開)：";
    cin >> a >> b;
    c = (float)a / (float)b;

    cout << a << "/" << b << "= " << c << endl;
    showContMsg();
}

//------------------------------
void showErrMsg()
{
    cout << "輸入錯誤，按鍵繼續...";
    while (!_kbhit());    
}

//------------------------------
void showContMsg()
{
    cout << "按鍵繼續..." << endl;
    while (!_kbhit());
}