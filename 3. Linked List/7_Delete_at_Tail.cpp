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

void deleteAtTail(node* &head)
{
    if(head==NULL)
    {
        return ;
    }

    if(head->next==NULL)
    {
        delete head;
        return ;
    }

    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }

    delete temp->next;
    temp->next=NULL;
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

    deleteAtTail(head);

    print(head);

    deleteAtTail(head);

    print(head);

    return 0;
}