#include <iostream>
using namespace std;

float C2F()
{
    float c, f;

    cout << "��J���ūסG";
    cin >> c;
    f = 32 + c * 1.8;

    return f;
}

int main()
{
    float f;

    f = C2F();
    cout << "�ؤ�ū�= " << f << endl;

    system("pause");
}
