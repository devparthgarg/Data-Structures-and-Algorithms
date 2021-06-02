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

int length(node *head)
{
	int len=0;
	while(head!=NULL)
	{
		head=head->next;
		len++;
	}
	return len;
}

//naive method (traversing full linked list)
int middle(node *head)//time comp. O(n) ; space comp. O(1)
{
	if(head==NULL)
	{
		return 0;
	}

	if(head->next==NULL)
	{
		return head->data;
	}

	int len=length(head);
	
	node *curr=head;
	int cnt=0;
	
	while(cnt<(len/2))
	{
		curr=curr->next;
		cnt++;
	}

	return curr->data;
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