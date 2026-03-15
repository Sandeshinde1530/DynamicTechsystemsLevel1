#include<iostream>

using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;
    
    Arithematic(int A , int B)
    {
        No1 = A;
        No2 = B;
    }

    int Addition()
    {
        return No1 + No2;
    }

    int substraction()
    {
        return No1 - No2;
    }

    int Multiplication()
    {
        return No1 *  No2;
    }

    int Division()
    {
        return No1 /  No2;
    }

};

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    cout<<"Enter two Numbers\n";
    cin>>iValue1>>iValue2;

    Arithematic aobj(iValue1 , iValue2);

    iRet = aobj.Addition();
    cout<<"Addition is :"<<iRet<<endl;

    iRet = aobj.substraction();
    cout<<"substraction is :"<<iRet<<endl;
    
    iRet = aobj.Multiplication();
    cout<<"Multiplication is :"<<iRet<<endl;
    
    iRet = aobj.Division();
    cout<<"Division is :"<<iRet<<endl;

    return 0;
}