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

void insertAtPthPosition(node* &head,int d,int p)
{
    int jump=0;
    node* temp=head;
    while(jump<(p-2))
    {
        temp=temp->next;
        jump++;
    }

    node* n=new node(d);
    n->next=temp->next;
    temp->next=n;

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

    insertAtPthPosition(head,100,4);

    print(head);

    insertAtPthPosition(head,200,2);

    print(head);

    return 0;
}