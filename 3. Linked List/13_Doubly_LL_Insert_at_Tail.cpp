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

void insertAtTail(node* &head,int d)
{
    if(head==NULL)
    {
        node* n=new node(d);
        head=n;

        return ;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    node* n=new node(d);
    temp->next=n;
    n->prev=temp;
    
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

    insertAtTail(head,40);

    print(head);

    insertAtTail(head,50);

    print(head);

    return 0;
}