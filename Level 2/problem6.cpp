#include <iostream>
// to find the factorial
using namespace std;

int Fact(int iNo)
{
    int iFact = 1;

    for (int i = iNo; i >= 1; i--)
    {
        iFact = iFact * i;
    }
    return iFact;
}

int main()
{

    int ivalue = 0;
    int iRet = 0;

    cout << "Enter the number";
    cin >> ivalue;

    iRet = Fact(ivalue);

    cout << "The Factorial of given number is :" << iRet << endl;

    return 0;
}
