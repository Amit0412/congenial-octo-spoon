#include <iostream>
using namespace std;
int area(int);
int area(int,int);

int main()
{
    int r;
    cout<<"Enter the value of r";
    cin>>r;
    area(r);
    int a,b;
    cout<<"Enter a,b\n";
    cin>>a>>b;
    area(a,b);

    return 0;
}
int area(int x)
{
    float area1;
    area1=3.14*x*x;
    cout<<"Area of circle will be\n"<<area1;
}
int area(int y,int z)
{
    float area2;
    area2=0.5*y*z;
    cout<<"Area of triangle will be\n"<<area2;
}
