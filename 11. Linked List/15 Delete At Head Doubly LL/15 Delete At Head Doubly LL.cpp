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

	Node* curr=head;
	head=head->next;
	head->prev=NULL;
	delete curr;

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
	Node* node1=new Node(10);
	Node* node2=new Node(20);
	Node* node3=new Node(30);

	node1->next=node2;
	node2->next=node3;

	node2->prev=node1;
	node3->prev=node2;

	print(node1);
	node1=deleteAtHead(node1);
	print(node1);

	return 0;
}