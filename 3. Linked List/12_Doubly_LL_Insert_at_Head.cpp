#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;

    node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void insertAtHead(node* &head,int d)
{
    node* n=new node(d);
    n->next=head;

    if(head!=NULL)
    {
        head->prev=n;
    }

    head=n;
    return ;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"<-->";
        head=head->next;
    }
    cout<<endl;

    return ;
}

int main()
{
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);

    head->next=second;
    second->prev=head;
    second->next=third;
    third->prev=second;

    print(head);

    insertAtHead(head,40);

    print(head);

    insertAtHead(head,50);

    print(head);

    return 0;
}