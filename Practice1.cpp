#include <iostream>

using namespace std;

int main()
{
    int Arr[5];
    int i = 0;

    cout << "Enter 5 numbers:\n";

    for (i = 0; i < 5; i++)
    {
        cin >> Arr[i];
    }

    cout << "Array elements are:\n";
    for (i = 0; i < 5; i++)
    {
        cout << Arr[i] << "\t";
    }

    return 0;
}