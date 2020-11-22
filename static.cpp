#include<iostream>
using namespace std;
class node
{
    public:
    static int x;
    node()
    {
        x++;
    }
};
int node::x=0;
int main()
{
    node ob1;
    node ob2;
    node ob3;
    cout<<node::x;
    return 0;
}
