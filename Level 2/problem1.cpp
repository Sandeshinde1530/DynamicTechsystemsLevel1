#include <iostream>

using namespace std;

bool ChkEvn(int iNo)
{
    if (iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int ivalue = 0;
    bool bRet = false;

    cout << "Enter the number";
    cin >> ivalue;

    bRet = ChkEvn(ivalue);

    if (bRet == true)
    {
        cout << "The Number is Even\n";
    }
    else
    {
        cout << "Number is Odd\n";
    }

    return 0;
}