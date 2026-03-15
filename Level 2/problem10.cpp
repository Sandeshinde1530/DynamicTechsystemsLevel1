#include <iostream>
// print the sum of the digits
using namespace std;

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    cout << "Enter the number:\n";
    cin >> ivalue;

    iRet = SumDigits(ivalue);

    cout << "the Sum of digits is : " << iRet << endl;

    return 0;
}