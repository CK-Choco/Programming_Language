#include <iostream>
using namespace std;

string func(int*, float*, float&);

int main()
{
    int score[3] = { 60,50,83 };
    float sum, avg;
    string str;

    str = func(score, &sum, avg);
    cout << "�`��= " << sum << endl;
    cout << "����= " << avg << endl;
    cout << "���Z" << str << endl;  
        
    system("pause");
}

string func(int* score, float* sum, float& avg)
{
    *sum = 0;
    bool fg = true;
    string str;

    for (int i = 0; i < 3; i++)
        *sum += score[i]; //�p���`��

    avg = *sum / 3.0f;

    for(int i=0;i<3;i++)
        if (score[i] < 60)
        {
            fg = false;
            break;
        }

    if (fg)
        str = "���Z�ή�";
    else
        str = "���H���ή�";

    return str;    
}
