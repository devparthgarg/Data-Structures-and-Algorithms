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
void middle(Node* head)
{
	if(head==NULL)
	{
		return ;
	}

	Node* slow=head;
	Node* fast=head;

	while(fast and fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
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
	middle(head);

	return 0;
}