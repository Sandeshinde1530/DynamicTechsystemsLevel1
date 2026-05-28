#include<iostream>

using namespace std;

class Base
{
    public:
        int i , j;

        virtual void Fun()//1000
        {cout<<"Inside Base Fun"<<endl;}
        void Sun()//2000
        {cout<<"Inside Base Sun"<<endl;}
        virtual void Mun()//3000
        {cout<<"Inside Base Mun"<<endl;}
        virtual void Run()//4000
        {cout<<"Inside Base Run"<<endl;}
};

class Derived : public Base
{
    public:
        int x, y;
        virtual void Fun()//5000
        {cout<<"Inside Derived Fun"<<endl;}
        void Sun()//6000
        {cout<<"Inside Derived Sun"<<endl;}
        void Mun()//7000
        {cout<<"Inside Derived Mun"<<endl;}
        virtual  void Gun()//8000
        {cout<<"Inside Derived Gun"<<endl;}
        
};


int main()
{

    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<endl;//8 // 16 //12
    cout<<sizeof(dobj)<<endl;//16 // 24 // 20

    Base *bptr = NULL;
    Derived *dptr = NULL;
    
    
    bptr = &dobj; //upcasting

    bptr->Fun();//  der fun
    bptr->Sun();// Base sun
    bptr->Mun();//derived Mun
    bptr->Run();//Base Run
    bptr->Gun();//error


    return 0;
}

    // bptr = &bobj;// no Casting

    // dptr = &dobj; // No Casting
    // dptr = &bpbj;// down casting 