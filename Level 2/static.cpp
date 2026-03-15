#include<iostream>

using namespace std;

class Demo
{
    public:
        int i , j;
        static int k;

        Demo()
        {
            i = 10;
            j = 20;
        }

        void Fun()
        {
            cout<<"Inside Non static Fun\n";
            cout<<this->i<<endl;
            cout<<this->j<<endl;
            cout<<k<<endl;
        }

        static void Gun()
        {
            cout<<"Inside static gun \n";
            cout<<k<<endl;
            // cout<<i<<endl; NA
        }

};

int Demo:: k = 30;

int main()
{
    cout<<"Value of k is :"<<Demo::k<<endl;
    Demo::Gun();

    Demo obj1;
    Demo obj2;

    obj1.Fun();
    obj2.Fun();

    obj1.Gun();
    obj2.Gun();

    cout<<"Value of k using obj1"<<obj1.k<<endl;
    cout<<"Value of k using obj2"<<obj2.k<<endl;

    cout<<sizeof(obj1)<<endl;
    cout<<sizeof(obj2)<<endl;

    cout<<(int)&obj1<<endl;
    cout<<(int)&obj2<<endl;
    cout<<(int)&(Demo::k)<<endl;


    return 0;
}

