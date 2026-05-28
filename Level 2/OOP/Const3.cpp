
#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1,No2;
        const int No3;
        
        Demo(int A,int B) : No3(30)
        {
            No1 = A;
            No2 = B;
        }

        void Fun()
        {
            No1++;
            No2++;

        }
        void Gun()const
        {
            cout<<No1<<endl;
            cout<<No2<<endl;
            cout<<No3<<endl;

            No1++;
            No2++;
        }
};

int main()
{
    Demo obj1(10,20);
    const Demo obj2(11,21);

    obj1.Fun();
    obj1.Gun();
    
    // obj2.Fun(); NA
    obj2.Gun();
    return 0;
}