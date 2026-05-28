#include<iostream>

using namespace std;

class Base
{
    public:
        int A,B;

        int Addition(int No1 , int No2)
        {
            return No1 + No2;
        }
        
        virtual int Substraction(int No1 , int No2) = 0;
        
};

class Derived : public Base
{
    public:
        int x,y;

        int Multiplication(int No1 ,int No2)
        {
            return No1 * No2;
        }

        int Substraction(int No1 , int No2)
        {
            return No1 - No2;
        }

};

int main()
{
    // Base bobj;
    Derived dobj;

    cout<<dobj.Addition(11,12)<<endl;
    cout<<dobj.Substraction(11,12)<<endl;
    cout<<dobj.Multiplication(11,12)<<endl;


    return 0;
}