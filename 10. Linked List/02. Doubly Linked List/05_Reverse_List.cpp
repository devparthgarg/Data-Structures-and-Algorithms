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

/*
Concept :
	swap prev and next of each node to reverse the list
*/
node *reverse(node *head)//time comp. O(n) ; space comp. O(1)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}

	node *temp=NULL;
	node *curr=head;
	while(curr!=NULL)
	{
		temp=curr->prev;
		curr->prev=curr->next;
		curr->next=temp;
		curr=curr->prev;
	}

	return temp->prev;
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
	head=reverse(head);
	print(head);
	return 0;
}