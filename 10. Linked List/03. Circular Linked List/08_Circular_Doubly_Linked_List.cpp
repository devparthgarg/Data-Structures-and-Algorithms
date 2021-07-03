#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *prev;
	node *next;

	node(int d)
	{
		data=d;
		prev=NULL;
		next=NULL;
	}
};

node *insertAtHead(node *head,int d)//time comp. O(n) ; space comp. O(1)
{
	node *n=new node(d);

	if(head==NULL)
	{
		head=n;
		head->next=head;
		head->prev=head;

		return head;
	}

	n->next=head;
	n->prev=head->prev;
	head->prev->next=n;
	head->prev=n;

	return n;
}

void print(node *head)
{
	if(head==NULL)
	{
		return ;
	}

	cout<<head->data<<" ";
	node *curr=head->next;
	while(curr!=head)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}

int main()
{
	/*
	Circular Doubly Linked List here is :

    -----------------------
    |                     |
    |                     v
	10 <-> 20 <-> 30 <-> 40
	^                     |
	|                     |
	-----------------------

	*/
	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(30);
	node *fourth=new node(40);

	head->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=head;

	head->prev=fourth;
	second->prev=head;
	third->prev=second;
	fourth->prev=third;

	print(head);
	head=insertAtHead(head,50);
	print(head);

	return 0;
}