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
	return 0;
}