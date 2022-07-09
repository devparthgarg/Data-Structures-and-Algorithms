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
void NthNode(Node* &head,int n)
{
	if(head==NULL)
	{
		return ;
	}

	Node* slow=head;
	Node* fast=head;

	while(n-- and fast)
	{
		fast=fast->next;
	}

	while(fast)
	{
		slow=slow->next;
		fast=fast->next;
	}

	cout<<slow->data<<endl;
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
	Node* head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);

	print(head);
	NthNode(head,2);

	return 0;
}