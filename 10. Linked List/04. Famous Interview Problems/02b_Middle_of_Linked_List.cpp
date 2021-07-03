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

//efficient method (traversing only half linked list)
int middle(node *head)//time comp. O(n) ; space comp. O(1)
{
	if(head==NULL)
	{
		return 0;
	}

	node *slow=head;
	node *fast=head;

	while(fast!=NULL and fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}

	return slow->data;
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

	10 -> 20 -> 30 -> 40 -> 50 -> NULL
	*/

	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(30);
	node *fourth=new node(40);
	node *fifth=new node(50);

	head->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;

	print(head);
	
	cout<<middle(head);
	return 0;
}