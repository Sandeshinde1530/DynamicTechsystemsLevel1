#include<iostream>

using namespace std;

class Demo
{
    public:
        int Addition(int A , int B)
        {
            return A + B;
        }

        int Addition(int A , int B , int C)
        {
            return A + B + C;
        }

        double Addition(double A , double B)
        {
            cout<<"Inside double addition function\n";
            return A + B;
        }

};

int main()
{
    Demo dobj;

    cout<<dobj.Addition(10,20)<<endl;
    cout<<dobj.Addition(10,20,30)<<endl;
    cout<<dobj.Addition(99.69,109.19)<<endl;
    
    return 0;
}