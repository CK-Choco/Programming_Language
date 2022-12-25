#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int* ptr=0, *ptrNum;
    int numbers[10];

    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++)
        numbers[i] = rand() % 10 + 1;

    ptrNum = numbers;
    try 
    {
        ptr = new int[10];

        for (int i = 0; i < 10; i++)
            *(ptr + i) = *(ptrNum + i);

        for (int i = 0; i < 10; i++)
            cout << *(ptr + i) << " ";
        
        delete[] ptr;
    }
    catch (bad_alloc & e)
    {
        cout << "記憶體配置失敗";
        exit(0);
    }    

    system("pause");
}