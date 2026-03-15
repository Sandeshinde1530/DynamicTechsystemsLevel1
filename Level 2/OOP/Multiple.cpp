#include<iostream>

using namespace std;

class Base1
{
    public:
        int i , j;

        Base1()
        {
            cout<<"Inside Base1 Constructor"<<endl;
            i = 10;
            j = 20;
        }
        ~Base1()
        {
            cout<<"Inside Base1 Destructor"<<endl;
        }

        void fun()
        {
            cout<<"Inside Base1 Fun"<<endl;
        }
};

class Base2
{
    public:
        int x , y;

        Base2()
        {
            cout<<"Inside Base2 Constructor"<<endl;
            x = 30;
            y = 40;
        }
        ~Base2()
        {
            cout<<"Inside Base2 Destructor"<<endl;
        }

        void Gun()
        {
            cout<<"Inside Base2 Gun"<<endl;
        }
};

class Derived : public Base2 , public Base1
{
    public:
        int A , B;

        Derived()
        {
            cout<<"Inside Derived Constructor"<<endl;
            A = 50;
            B = 60;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor"<<endl;
        }

        void Sun()
        {
            cout<<"Inside Derived Sun"<<endl;
        }
};

int main()
{
    Derived dobj;

    cout<<"INside main function"<<endl;

    cout<<"Size of Base1 Class object:"<<sizeof(Base1)<<endl;//8
    cout<<"Size of Base2 Class object:"<<sizeof(Base2)<<endl;//8
    cout<<"Size of Derived Class object:"<<sizeof(Derived)<<endl;//24

    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.x<<endl;
    cout<<dobj.y<<endl;
    cout<<dobj.A<<endl;
    cout<<dobj.B<<endl;

    dobj.fun(); // Inside Base1 Fun
    dobj.Gun();// INside Base2 gun
    dobj.Sun();// Inside Derived Sun

    return 0;
}