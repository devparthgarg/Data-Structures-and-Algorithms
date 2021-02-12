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

int searchIterative(node* head,int d) //Time Comp. O(n)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        if(head->data==d)
        {
            return count;
        }

        head=head->next;
    }

    return -1;
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

    cout<<searchIterative(head,10);

    return 0;
}
