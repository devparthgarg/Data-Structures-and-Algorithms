#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int data_)
	{
		data=data_;
		next=NULL;
	}
};

//Time: O(N)
//Space: O(1)
Node* merge(Node* &l1,Node* &l2)
{
	if(l1==NULL)
	{
		return l2;
	}

	if(l2==NULL)
	{
		return l1;
	}
	
	Node* head=new Node(0);
	Node* curr=head;

	while(l1 and l2)
	{
		if(l1->data<l2->data)
		{
			curr->next=l1;
			l1=l1->next;
		}
		else
		{
			curr->next=l2;
			l2=l2->next;
		}
		curr=curr->next;
	}

	curr->next=l1?l1:l2;
	return head->next;
}

void print(Node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}

int main()
{
	Node* head1=new Node(10);
	head1->next=new Node(20);
	head1->next->next=new Node(30);
	head1->next->next->next=new Node(40);

	Node* head2=new Node(5);
	head2->next=new Node(15);
	head2->next->next=new Node(25);
	head2->next->next->next=new Node(35);

	print(head1);
	print(head2);
	head1=merge(head1,head2);
	print(head1);

	return 0;
}