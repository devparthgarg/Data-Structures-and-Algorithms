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
Node* deleteAtHead(Node* &head)
{
	if(head==NULL)
	{
		return NULL;
	}	

	if(head->next==NULL)
	{
		delete head;
		return NULL;
	}

	//make last node next as head's next
	Node* curr=head;
	while(curr->next!=head)
	{
		curr=curr->next;
	}

	curr->next=head->next;
	delete head;

	return curr->next;
}

void print(Node* head)
{
	if(head==NULL)
	{
		return ;
	}

	Node* curr=head;

	cout<<curr->data<<" ";
	curr=curr->next;

	while(curr!=head)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}

int main()
{
	Node* node1=new Node(10);
	Node* node2=new Node(20);
	Node* node3=new Node(30);

	node1->next=node2;
	node2->next=node3;
	node3->next=node1;

	print(node1);
	node1=deleteAtHead(node1);
	print(node1);

	return 0;
}