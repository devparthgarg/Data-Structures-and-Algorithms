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

void deleteAtHead(node* &head)
{
    if(head==NULL)
    {
        return ;
    }

    node* temp=head;
    head=head->next;
    delete temp;
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

    deleteAtHead(head);

    print(head);

    deleteAtHead(head);

    print(head);

    return 0;
}