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

class myStack
{
    public:

    node* head;
    int sz;

    myStack()
    {
        head=NULL;
        sz=0;
    }

    void push(int d)
    {
        node* n=new node(d);
        n->next=head;
        head=n;
        sz++;
    }

    int pop()
    {
        if(head==NULL)
        {
            return INT_MAX;
        }

        int res=head->data;
        node* n=head;
        head=head->next;
        delete n;
        sz--;

        return res;
    }

    int size()
    {
        return sz;
    }

    bool isEmpty()
    {
        return (head==NULL);
    }

    int peek()
    {
        if(head==NULL)
        {
            return INT_MAX;
        }

        return (head->data);
    }
};

int main()
{
    myStack s;
    
    s.push(5);
    s.push(10);
    s.push(15);

    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}