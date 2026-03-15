#include <iostream>

using namespace std;

int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout << "Enter two Numbers" << endl;
    cin >> iNo1 >> iNo2;

    if (iNo1 > iNo2)
    {
        cout << "The Greater number is :" << iNo1;
    }
    else
    {
        cout << "The Greater number is :" << iNo2;
    }

    return 0;
}