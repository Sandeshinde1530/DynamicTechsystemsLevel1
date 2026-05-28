#include<iostream>

using namespace std;

void  RevFactors(int iNo)
{

    for(int i = iNo / 2 ; i >= 1 ; i--)
    {
        if(iNo % i == 0)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number "<<endl;
    cin>>iValue;

     RevFactors(iValue);

    return 0;
}