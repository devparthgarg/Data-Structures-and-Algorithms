#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* prev;
	Node* next;

	Node(int data_)
	{
		data=data_;
		prev=NULL;
		next=NULL;
	}
};

//Time: O(1)
//Space: O(1)
Node* insertAtHead(Node* &head,int key)
{
	Node* n=new Node(key);

	if(head==NULL)
	{
		n->next=n;
		n->prev=n;
		return n;
	}

	n->prev=head->prev;
	n->next=head;
	head->prev->next=n;
	head->prev=n;

	return n;
}

void print(Node* head)
{
	Node* curr=head;
	while(curr->next!=head)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<curr->data;
	cout<<endl;
}

int main()
{
	Node* node1=new Node(10);
	Node* node2=new Node(20);
	Node* node3=new Node(30);
	Node* node4=new Node(40);

	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node1;

	node1->prev=node4;
	node2->prev=node1;
	node3->prev=node2;
	node4->prev=node3;

	print(node1);
	node1=insertAtHead(node1,50);
	print(node1);

	return 0;
}