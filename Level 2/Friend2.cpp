#include<iostream>

using namespace std;

class Hello
{
    public:
        void Fun(); 
};

class Demo
{
    public:
        int i;
    private: 
        int j;
    protected:
        int k;

    public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }

    friend void Hello:: Fun();
};

void Hello :: Fun()
{
    Demo dobj;
    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.k<<endl;
}

int main()
{
    cout<<"Friend2.cpp"<<endl;
    Hello hobj;
    hobj.Fun();
    return  0;
}