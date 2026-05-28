#include<iostream>

using namespace std;

int MultiplyFactors(int iNo)
{
    int iMult = 1;

    for(int i = 1 ; i <= iNo / 2 ; i++)
    {
        if(iNo % i == 0)
        {
            // cout<<i<<endl;
            // iMult = iMult * i;

            iMult *= i;
        }
    }

    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter the number "<<endl;
    cin>>iValue;

   iRet = MultiplyFactors(iValue);

   cout<<"Multiplication of factors is :"<<iRet<<endl;
    return 0;
}