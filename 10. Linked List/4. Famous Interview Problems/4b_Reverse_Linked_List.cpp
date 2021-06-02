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

//efficient method (no need of extra space)
void reverse(node *&head)//time comp. O(n) ; space comp O(1)
{
	if(head==NULL or head->next==NULL)
	{
		return ;
	}

	node *curr=head;
	node *prev=NULL;

	while(curr!=NULL)
	{
		node *temp=curr->next;
		curr->next=prev;
		prev=curr;
		curr=temp;
	}
	head=prev;
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
	reverse(head);
	print(head);

	return 0;
}