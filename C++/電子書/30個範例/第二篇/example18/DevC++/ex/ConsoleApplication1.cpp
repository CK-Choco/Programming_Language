#include <iostream>
using namespace std;

float C2F()
{
    float c, f;

    cout << "輸入攝氏溫度：";
    cin >> c;
    f = 32 + c * 1.8;

    return f;
}

int main()
{
    float f;

    f = C2F();
    cout << "華氏溫度= " << f << endl;

    system("pause");
}
