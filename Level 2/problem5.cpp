#include <iostream>
// to check prime number
using namespace std;

bool ChkPrime(int iNo)
{
    bool bFlag = true;

    for (int i = 2; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{

    int ivalue = 0;
    bool bRet = false;

    cout << "Enter the number";
    cin >> ivalue;

    bRet = ChkPrime(ivalue);

    if (bRet == true)
    {
        cout << "The number is prime\n";
    }
    else
    {
        cout << "The number is not prime\n";
    }

    return 0;
}
