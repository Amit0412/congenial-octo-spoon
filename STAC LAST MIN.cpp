#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*link;
};
struct node*top=NULL;
void push()
{
    struct node*p=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter the data"<<endl;
    cin>>p->data;
    p->link=NULL;
    if(top==NULL)
    {
        top=p;
    }
    else
    {
        p->link=top;
    }
    top=p;
}
void pop()
{
    if(top==NULL)
    {
        cout<<"STACK UNDERFLOW"<<endl;
    }
    else
    {
        cout<<"element deleted"<<endl;
        top=top->link;
    }
}
void display()
{
    if(top==NULL)
    {
        cout<<"STACK UNDERFLOW"<<endl;
    }
    else
    {
        struct node*n=top;
        while(n!=NULL)
        {
            cout<<"The elements are as follows:";
            cout<<n->data<<endl;
            n=n->link;
        }
    }
}
int main()
{
    push();
    push();
    push();
    push();
    pop();
    push();
    pop();
    push();
    display();
    return 0;
}
