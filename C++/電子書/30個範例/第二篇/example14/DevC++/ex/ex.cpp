#include <iostream>
#include <cstring>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{    
    char cstr[11];
    string str;
    string newstr;
    int v, num;

    srand((unsigned)time(NULL));
    newstr.resize(11);
    cout << "Wait..." << endl;

    num = 0;
    while (num < 10)
    {
        v = (rand() % 75) + 48;
        if (v > 57 && v < 97)
            continue;
        
        cstr[num] = (char)v;
        num++;
    }
    cstr[10] = '\0'; 

    Sleep(1000);
    num = 0;
    while (num < 10)
    {
        v = (rand() % 75) + 48;
        if (v > 57 && v < 97)
            continue;

        str.append(1,(char)v);
        num++;
    }
    
    //-------------------------------------
    Sleep(1000);    
    for (int i = 0; i < 5; i++)
        newstr[i] = cstr[rand()%11];

    Sleep(1000);
    for (int i = 0; i < 5; i++)
        newstr[i+5] = str[rand() % 11];

    cout << "cstr= " << cstr << endl;
    cout << "str= " << str << endl;
    cout << "newstr= " << newstr << endl;

    //--------------------------------------  
    for (int i = 0; i < 10; i++)
    {
        num = 0;        
        str = cstr;

        //重複出現的字元不列入計算
        if (i!=0 && str.rfind(cstr[i],i-1) != string::npos)
            continue;

        str = cstr[i];
        for (int j = 0; j < 10; j++)
            if(newstr.compare(j,1,str)==0)
                num++;

        if(num!=0)
            cout << str << ": " << num << endl;
    }

    system("pause");
}
