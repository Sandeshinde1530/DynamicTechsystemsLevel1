#include <iostream>

using namespace std;

void Fibonacci(int iEnd)
{
    int No1 = 0;
    int No2 = 1;
    int Next = 0;

    for (int i = 0; i < iEnd; i++)
    {
        Next = No1 + No2;
        cout << No1 << endl;
        No1 = No2;
        No2 = Next;
    }
}

int main()
{
    int ivalue = 0;

    cout << "Enter the number:\n";
    cin >> ivalue;

    Fibonacci(ivalue);

    return 0;
}