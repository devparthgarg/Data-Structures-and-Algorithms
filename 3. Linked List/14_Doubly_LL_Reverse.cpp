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

void reverse(node* &head)
{
    node* temp=NULL; 
    node* current=head; 
     
    while(current!=NULL) 
    { 
        temp=current->prev; 
        current->prev=current->next; 
        current->next=temp;             
        current=current->prev; 
    } 
     
    if(temp!=NULL)
    {
        head=temp->prev;
    }

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

    reverse(head);    

    print(head);

    return 0;
}