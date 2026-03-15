#include<iostream>

using namespace std;

class Base
{
    public:
        int A, B;

        Base()
        {
            cout<<"Inside Base Constructor"<<endl;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor"<<endl;
        }

        void fun()
        {
            cout<<"INside Base  fun"<<endl;
        }
};

class Derived : public Base
{
    public:
        int i,j;
    
        Derived()
        {
            cout<<"Inside Derived Constructor"<<endl;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor"<<endl;
        }

        void gun()
        {
            cout<<"INside Derived  gun"<<endl;
        }

};

class DerivedX : public Derived
{
    public:
        int x,y;
    
        DerivedX()
        {
            cout<<"Inside DerivedX Constructor"<<endl;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor"<<endl;
        }

        void Sun()
        {
            cout<<"INside DerivedX  Sun"<<endl;
        }

};

int main()
{ 
    DerivedX dobj;

    cout<<"The Size of object of Base class is :"<<sizeof(Base)<<endl;//8
    cout<<"The Size of object of Derived class is :"<<sizeof(Derived)<<endl;//16
    cout<<"The Size of object of DerivedX class is :"<<sizeof(DerivedX)<<endl;//24

    return 0;
}