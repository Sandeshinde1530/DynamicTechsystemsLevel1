#include<iostream>

using namespace std;

class Arithemetic
{
    public:
    int No1  , No2;

    Arithemetic(int A , int B)
    {
        No1 = A;
        No2 = B;
    }

    int Addition()
    {
        int iAdd = 0;
        iAdd = No1 + No2;

        return iAdd;
    }

    int Substraction()
    {
        int iSub = 0;
        iSub = No1 - No2;

        return iSub;
    }
};

int main()
{ 
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    cout<<"Enter two numbers:\n";
    cin>>iValue1>>iValue2;

    Arithemetic aobj(iValue1 , iValue2);

    iRet = aobj.Addition();
    cout<<"Addition is :"<< iRet<<endl;

    iRet = aobj.Substraction();
    cout<<"Substraction is :"<< iRet<<endl;    

    return 0 ;
}