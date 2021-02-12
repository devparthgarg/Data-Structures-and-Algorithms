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

int searchRecursive(node* head,int d)
{
    //base case
    if(head==NULL)
    {
        return -1;
    }

    if(head->data==d)
    {
        return 1;
    }

    //recursive case
    int res=searchRecursive(head->next,d);
    if(res==-1)
    {
        return -1;
    }
    else
    {
        return res+1;
    }
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
    node* head=new node(50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    print(head);

    cout<<searchRecursive(head,30);

    return 0;
}