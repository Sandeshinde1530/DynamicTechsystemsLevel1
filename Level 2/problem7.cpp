#include <iostream>
// to Print the prime numbers in give range
using namespace std;

void printprime(int from, int to)
{
    for (int i = from; i <= to; i++) // range madhle numbers iterate karnyasathi
    {
        bool bflag = true;
        for (int j = 2; j <= i / 2; j++) // here we will iterate from 2 to i /2(i is the number which we are checking is prime or not);
        {
            if (i % j == 0)
            {
                bflag = false;
            }
        }
        if (bflag == true)
        {
            cout << i << endl;
        }
    }
}

int main()
{

    int ivalue1 = 0, ivalue2 = 0;
    int iRet = 0;

    cout << "Enter the Range";
    cin >> ivalue1 >> ivalue2;

    printprime(ivalue1, ivalue2);

    return 0;
}
