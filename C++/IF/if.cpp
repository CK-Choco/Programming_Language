#include<iostream>
using namespace std;

int main()
{
    int grade;

    cin >> grade;

    if( grade >= 60 )
    {
        cout << "You Pass!" << endl;
    }
    else
    {
        cout << "You Fail..." << endl;
    }

    return 0;
}
