#include<iostream>

using namespace std;

void  NonFactor(int iNo)
{

    for(int i = 1  ; i < iNo ; i++)
    {
        if(iNo % i !=  0)
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

     NonFactor(iValue);

    return 0;
}