#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*link;
};
struct node*start=NULL;
struct node*last=NULL;
void enqueue()
{
    struct node*m=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter the data in queue"<<endl;
    cin>>m->data;
    m->link=NULL;
    if(start==NULL)
    {
        start=m;
    }
    else
    {
        last->link=m;
    }
    last=m;
}
void dequeue()
{
    if(start==NULL)
    {
        cout<<"queue empty"<<endl;
    }
    else
    {
        cout<<"Element deleted"<<endl;
        start=start->link;
    }
}
void display()
{
    if(start==NULL)
    {
        cout<<"QUEUE empty"<<endl;
    }
    else
    {
        struct node*u=start;
        while(u!=NULL)
        {
            cout<<u->data<<endl;
            u=u->link;
        }
    }
}
int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    display();
    return 0;
}
