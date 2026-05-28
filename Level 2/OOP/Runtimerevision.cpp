#include<iostream>

using namespace std;

class Base
{
    public:
        int i , j;

        void Fun()
        {cout<<"Inside Base Fun"<<endl;}
        void Sun()
        {cout<<"Inside Base Sun"<<endl;}
        void Mun()
        {cout<<"Inside Base Mun"<<endl;}
        void Run()
        {cout<<"Inside Base Run"<<endl;}
};

class Derived : public Base
{
    public:
        int x, y;
        void Fun()
        {cout<<"Inside Derived Fun"<<endl;}
        void Sun()
        {cout<<"Inside Derived Sun"<<endl;}
        void Mun()
        {cout<<"Inside Derived Mun"<<endl;}
        void Gun()
        {cout<<"Inside Derived Gun"<<endl;}
        
};


int main()
{

    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<endl;//8
    cout<<sizeof(dobj)<<endl;//16

    Base *bptr = NULL;
    Derived *dptr = NULL;
    
    
    bptr = &dobj; //upcasting

    bptr->Fun();//  Base fun
    bptr->Sun();// Base sun
    bptr->Mun();//Base Mun
    bptr->Run();//Base Run
    // bptr->Gun();//error


    return 0;
}

    // bptr = &bobj;// no Casting

    // dptr = &dobj; // No Casting
    // dptr = &bpbj;// down casting 