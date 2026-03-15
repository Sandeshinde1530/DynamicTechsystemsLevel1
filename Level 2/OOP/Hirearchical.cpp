#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"INside Base Constructor\n";
            i = 10;
            j = 20;
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void Fun()
        {
            cout<<"inside Base Fun\n";
        }        
};

class Derived1 : public Base
{
    public:
        int x ,y;

        Derived1()
        {
            cout<<"INside Derived1 Constructor\n";
            x = 30;
            y = 40;
        }

        ~Derived1()
        {
            cout<<"Inside Derived1 Destructor\n";
        }

        void Gun()
        {
            cout<<"inside Derived1 Gun\n";
        }        
};


class Derived2 : public Base
{
    public:
        int a ,b;

        Derived2()
        {
            cout<<"INside Derived2 Constructor\n";
            a = 50;
            b = 60;
        }

        ~Derived2()
        {
            cout<<"Inside Derived2 Destructor\n";
        }

        void Sun()
        {
            cout<<"inside Derived2 Sun\n";
        }        
};

int main()
{
    Derived1 dobj1; //16

    Derived2 dobj2; //16

    cout<<sizeof(dobj1)<<endl;
    cout<<sizeof(dobj2)<<endl;

    return 0;
}