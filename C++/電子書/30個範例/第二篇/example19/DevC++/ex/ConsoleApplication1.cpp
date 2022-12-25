#include <iostream>
using namespace std;

string func(int*, float*, float&);

int main()
{
    int score[3] = { 60,50,83 };
    float sum, avg;
    string str;

    str = func(score, &sum, avg);
    cout << "總分= " << sum << endl;
    cout << "平均= " << avg << endl;
    cout << "全班" << str << endl;  
        
    system("pause");
}

string func(int* score, float* sum, float& avg)
{
    *sum = 0;
    bool fg = true;
    string str;

    for (int i = 0; i < 3; i++)
        *sum += score[i]; //計算總分

    avg = *sum / 3.0f;

    for(int i=0;i<3;i++)
        if (score[i] < 60)
        {
            fg = false;
            break;
        }

    if (fg)
        str = "全班及格";
    else
        str = "有人不及格";

    return str;    
}
