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

node *insertAtTail(node *head,int d)//time comp. O(n) ; space comp. O(1)
{
	node *n=new node(d);

	if(head==NULL)
	{
		head=n;
		head->next=head;
		return head;
	}

	node *curr=head->next;
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	curr->next=n;
	n->next=head;

	return head;
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
	Circular Linked List here is :

	10 -> 20 -> 30 
	^           |
	|			|
	-------------
	*/
	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(30);

	head->next=second;
	second->next=third;
	third->next=head;//this steps makes this list circular

	print(head);
	head=insertAtTail(head,40);
	print(head);
	return 0;
}