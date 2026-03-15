#include <iostream>

using namespace std;

void ChkNum(int iNo)
{
    if (iNo > 0)
    {
        cout << "Entered number is Positive";
    }
    else if (iNo < 0)
    {
        cout << "Entered number is Negative";
    }
    else
    {
        cout << "Entered number is Zero";
    }
}

int main()
{

    int ivalue = 0;
    bool bRet = false;

    cout << "Enter the number";
    cin >> ivalue;

    ChkNum(ivalue);

    return 0;
}