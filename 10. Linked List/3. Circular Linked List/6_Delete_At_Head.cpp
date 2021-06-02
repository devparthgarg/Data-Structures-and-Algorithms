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

node *deleteAtHead(node *head)//time comp. O(n) ; space comp. O(1)
{
	if(head==NULL)
	{
		return NULL;
	}

	if(head->next==head)
	{
		delete head;
		return NULL;
	}

	node *curr=head;
	while(curr->next!=head)
	{
		curr=curr->next;
	}
	node *temp=head;
	head=head->next;
	delete temp;
	curr->next=head;

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
	head=deleteAtHead(head);
	print(head);
	return 0;
}