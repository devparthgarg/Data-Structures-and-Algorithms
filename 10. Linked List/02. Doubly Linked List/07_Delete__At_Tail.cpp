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

node *deleteAtTail(node *head)//time comp. O(n) ; space comp. O(1)
{
	if(head==NULL)
	{
		return NULL;
	}

	if(head->next==NULL)
	{
		delete head;
		return NULL;
	}

	node *curr=head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	node *temp=curr->prev;
	temp->next=NULL;
	delete curr;

	return head;
}

void print(node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" <-> ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	/*
	Doubly Linked List here is :
	10 <-> 20 <-> 30 <-> NULL
	*/
	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(30);

	head->next=second;
	second->next=third;
	second->prev=head;
	third->prev=second; 

	print(head);
	head=deleteAtTail(head);
	print(head);
	return 0;
}