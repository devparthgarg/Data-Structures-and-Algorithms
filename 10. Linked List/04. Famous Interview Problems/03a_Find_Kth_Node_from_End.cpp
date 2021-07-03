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

//naive method (had to calculate length)
int KthNode(node *head,int k)//time comp. O(n) ; space comp. O(1)
{
	if(head==NULL)
	{
		return 0;
	}

	int len=length(head);

	if(k>len)
	{
		return 0;
	}

	node *curr=head;
	int i=0;
	while(i<len-k)
	{
		curr=curr->next;
		i++;
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
	
	cout<<KthNode(head,2);
	return 0;
}