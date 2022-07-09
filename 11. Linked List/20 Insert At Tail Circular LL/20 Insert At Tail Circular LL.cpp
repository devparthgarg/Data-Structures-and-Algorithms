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

	if(head==NULL)
	{
		n->next=n;
		return n;
	}
	
	//traverse till last node
	//insert the key node
	Node* curr=head;
	while(curr->next!=head)
	{
		curr=curr->next;
	}

	curr->next=n;
	n->next=head;

	return n;
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
	insertAtTail(node1,40);
	print(node1);

	return 0;
}