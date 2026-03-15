#include <iostream>
// to check number is Palindrome or not
using namespace std;

bool ChkPalindrome(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    int temp = iNo;

    while (temp > 0)
    {
        iDigit = temp % 10;
        iRev = (iRev * 10) + iDigit;
        temp = temp / 10;
    }
    if (iNo == iRev)
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

    cout << "Enter the number:\n";
    cin >> ivalue;

    bRet = ChkPalindrome(ivalue);

    if (bRet == true)
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not palindrome";
    }

    return 0;
}