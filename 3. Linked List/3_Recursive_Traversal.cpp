#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void recursivePrint(node* head)
{
    //base case
    if(head==NULL)
    {
        return ;
    }

    //recursive case
    cout<<head->data<<"->";
    recursivePrint(head->next);
}

int main()
{
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(50);

    head->next=second;
    second->next=third;

    recursivePrint(head);

    return 0;
}