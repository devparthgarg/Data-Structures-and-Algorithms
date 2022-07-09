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
Node* insertAtTail(Node* &head,int key)
{
	Node* n=new Node(key);

	//base case
	if(head==NULL)
	{
		return n;
	}

	//traverse to the last node
	Node* curr=head;
	while(curr->next)
	{
		curr=curr->next;
	}

	//make last node next as key node
	curr->next=n;

	return head;
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
	head=insertAtTail(head,40);
	print(head);

	return 0;
}