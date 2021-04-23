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

int length(node* head)
{
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }

    return len;
}

void insertAtPthPosition(node* &head,int d,int p)
{
    if(p<1 or p>(length(head)+1))
    {
        return ;
    }

    if(p==1)
    {
        node* n=new node(d);
        n->next=head;
        head=n;

        return ;
    }

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