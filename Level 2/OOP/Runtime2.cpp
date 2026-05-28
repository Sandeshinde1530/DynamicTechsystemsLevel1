#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;

        virtual void Fun()
        {cout<<"inside Base Fun"<<endl;}
        void Sun()
        {cout<<"inside Base Sun"<<endl;}
        virtual void  Run()
        {cout<<"inside Base  Run"<<endl;}
        void Mun()
        {cout<<"inside Base Mun"<<endl;}
        void Gun()
        {cout<<"inside  Base Gun"<<endl;}
};

class Derived : public Base
{
    public:
        int x,y;

        virtual void Fun()
        {cout<<"inside Derived Fun"<<endl;}
        void Sun()
        {cout<<"inside Derived Sun"<<endl;}
       virtual  void  Run()
        {cout<<"inside Derived  Run"<<endl;}
       virtual void Gun()
        {cout<<"inside Derived Mun"<<endl;}
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

    bptr->Fun(); //Derived fun
    bptr->Sun();// Base Sun
    bptr->Run();//Derived Run
    bptr->Mun();//Base Mun
    bptr->Gun();

    return 0;
}