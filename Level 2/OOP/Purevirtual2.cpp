#include<iostream>

using namespace std;


class Base
{
    public:
        int A, B;

        int Addition(int No1 , int No2)//1000
        {
            return No1 + No2;
        }

       virtual int Substraction(int No1 , int No2) = 0;//2000
};

class Derived : public Base
{
    public:
        int x ,y ;

        int Multiplication(int No1 , int No2)//3000
        {
            return No1 * No2;
        }

        int Division(int No1 ,  int No2)//4000
        {
            return No1 / No2;
        }

        int Substraction(int No1 , int No2)//5000
        {
            return No1 - No2;
        }
};

int main()
{
    // Base bobj;
    Derived dobj;
    cout<<sizeof(dobj)<<endl;

    cout<<dobj.Addition(22,11)<<endl;
    cout<<dobj.Substraction(22,11)<<endl;
    cout<<dobj.Multiplication(22,11)<<endl;
    cout<<dobj.Division(22,11)<<endl;

    return 0;
}