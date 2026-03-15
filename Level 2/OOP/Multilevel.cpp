#include<iostream>

using namespace  std;

class Base
{
    public:
        int i , j;

    Base()
    {
        cout<<"Inside Base Constructor"<<endl;
        i = 10;
        j = 20;
    }

    ~Base()
    {
        cout<<"Inside Base Destructor"<<endl;
    }

    void fun()
    {
        cout<<"Inside Base Fun"<<endl;
    }
};

class Derived : public Base
{
    public:
        int x,y;

        Derived()
        {
            cout<<"INside Derived Constructor"<<endl;
            x = 30;
            y = 40;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor"<<endl;
        }

        void Gun()
        {
            cout<<"Inside Derived gun Method"<<endl;
        }
};

class DerivedX : public Derived
{
    public :
        int A ,  B;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor"<<endl;
            A = 50;
            B = 60;
        }
       
       ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor"<<endl;
        }

        void Sun()
        {            cout<<"Inside Derivedx SUn"<<endl;         }

};

int main()
{
    DerivedX dobj;
    //constructor calling   Base->Derived->DerivedX

    cout<<"Inside Main Function"<<endl;

    cout<<"Size of Base Class object:"<<sizeof(Base)<<endl;//8
    cout<<"Size of Derived Class object:"<<sizeof(Derived)<<endl;//16
    cout<<"Size of DerivedX Class object:"<<sizeof(DerivedX)<<endl;//24

    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.x<<endl;
    cout<<dobj.y<<endl;
    cout<<dobj.A<<endl;
    cout<<dobj.B<<endl;

    dobj.fun(); // Inside Base Fun
    dobj.Gun();// INside Derived gun
    dobj.Sun();// Inside DerivedX Sun

    //Destructor calling DerivedX->Derived-> base;

    return 0;
}