#include<iostream>

using namespace std;

void AreaOfCircle(float r , float Pi = 3.14)
{
    float Area = 0;

    Area = Pi * r * r;

    cout<<Area<<endl;
}

int main()
{
    AreaOfCircle(10);

    return 0;
}