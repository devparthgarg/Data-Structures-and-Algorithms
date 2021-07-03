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

void removeDuplicates(node *&head)//time comp. O(n) ; space comp. O(1)
{
	node *curr=head;

	while(curr!=NULL and curr->next!=NULL)
	{
		if(curr->data == curr->next->data)
		{
			node *temp=curr->next;
			curr->next=curr->next->next;
			delete temp;
		}
		else
		{
			curr=curr->next;
		}
	}
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
	10 -> 20 -> 20 -> 30 -> 30 -> NULL
	*/

	node *head=new node(10);
	node *second=new node(20);
	node *third=new node(20);
	node *fourth=new node(30);
	node *fifth=new node(30);

	head->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;

	print(head);
	removeDuplicates(head);
	print(head);

	return 0;
}