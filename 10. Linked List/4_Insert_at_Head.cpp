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

void insertAtHead(node* &head,int d)
{
    if(head==NULL)
    {
        return ;
    }

    node* n=new node(d);
    n->next=head;
    head=n;

    return ;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
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
    second->next=third;

    print(head);

    insertAtHead(head,40);
    insertAtHead(head,50);

    print(head);

    return 0;
}