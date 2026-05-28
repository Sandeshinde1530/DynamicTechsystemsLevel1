#include<iostream>

using namespace std;

int  SumNonFactor(int iNo)
{
    int iSum = 0;

    for(int i = 1  ; i < iNo ; i++)
    {
        if(iNo % i !=  0)
        {
            // iSum = iSum + i;
            iSum += i;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number "<<endl;
    cin>>iValue;

     iRet = SumNonFactor(iValue);
     cout<<"Sum of Non Factors is:"<<iRet<<endl;

    return 0;
}