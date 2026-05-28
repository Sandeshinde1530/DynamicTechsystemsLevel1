#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;

        void Fun()
        {cout<<"inside Base Fun"<<endl;}
        void Sun()
        {cout<<"inside Base Sun"<<endl;}
        void  Run()
        {cout<<"inside Base  Run"<<endl;}
        void Mun()
        {cout<<"inside Base Mun"<<endl;}
};

class Derived : public Base
{
    public:
        int x,y;

        void Fun()
        {cout<<"inside Base Fun"<<endl;}
        void Sun()
        {cout<<"inside Base Sun"<<endl;}
        void  Run()
        {cout<<"inside Base  Run"<<endl;}
        void Gun()
        {cout<<"inside Base Mun"<<endl;}
};


int main()
{
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<endl; //8
    cout<<sizeof(dobj)<<endl;//16

    Base *bptr = NULL;      //8
    Derived *dptr = NULL;   // 8

    bptr = &dobj; // upcasting

    bptr->Fun(); //Base fun
    bptr->Sun();// Base Sun
    bptr->Run();//Base Run
    bptr->Mun();//Base Mun
    // bptr->Gun();

    return 0;
}