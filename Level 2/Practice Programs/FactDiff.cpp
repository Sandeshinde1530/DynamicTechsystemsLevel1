#include<iostream>

using namespace std;

int FactDiff(int iNo)
{
    int iFactSum = 0;
    int iNonFactSum = 0;
    for(int i = 1 ; i< iNo ; i++)
    {
        if(iNo % i == 0)
        {
            iFactSum = iFactSum + i;
        }
        else
        {
            iNonFactSum  += i;
        }
    }
    return iNonFactSum - iFactSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;
    cout<<"Enter a number :"<<endl;
    cin>>iValue;

    iRet = FactDiff(iValue);
    cout<<"The Difference is :"<<iRet<<endl;

    return 0;
}