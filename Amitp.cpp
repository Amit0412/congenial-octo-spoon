#include <iostream>
using namespace std;
int Great(int,int,int);
int main()
{
    int a,b,c;
    cout<<"Enter the value of first digit";
    cin>>a;
    cout<<"Enter the value of second digit";
    cin>>b;
    cout<<"Enter the value of third digit";
    cin>>c;
    Great(a,b,c);
    return 0;

}
int Great(int x,int y,int z)
{
    if(x>y&&x>z)
    {
        cout<<"Largest will be"<<x;
    }
    else
    {
        if(y>x&&y>z)
        {
            cout<<"Largest will be"<<y;
        }
        else
        {
            cout<<"Largest will be"<<z;
        }
    }

}
