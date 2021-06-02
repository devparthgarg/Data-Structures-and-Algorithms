#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};

node *insert(node *head,int d)//time comp. O(n) ; space comp. O(1)
{
	node *n=new node(d);

	if(head==NULL)
	{
		return n;
	}

	if(head->data>d)
	{
		n->next=head;
		return n;
	}

	node *curr=head;
	while(curr->next!=NULL and curr->next->data<d)
	{
		curr=curr->next;
	}
	node *temp=curr->next;
	curr->next=n;
	n->next=temp;

	return head;
}

void print(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	/*
	Linked List here is :

	10 -> 20 -> 30 -> NULL
	*/

	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(30);

	head->next=second;
	second->next=third;

	print(head);
	head=insert(head,25);
	print(head);
	head=insert(head,5);
	print(head);
	head=insert(head,35);
	print(head);

	return 0;
}