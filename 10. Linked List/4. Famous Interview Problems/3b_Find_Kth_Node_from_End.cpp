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

//efficient method (no need to calculate length)
int KthNode(node *head,int k)//time comp. O(n) ; space comp. O(1)
{
	if(head==NULL)
	{
		return 0;
	}

	node *slow=head;
	node *fast=head;

	for(int i=0;i<k;i++)
	{
		if(fast==NULL)
		{
			return 0;
		}

		fast=fast->next;
	}

	while(fast!=NULL)
	{
		slow=slow->next;
		fast=fast->next;
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
	
	cout<<KthNode(head,3);
	return 0;
}