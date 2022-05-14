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

//Time: O(1)
//Space: O(1)
Node* insertAtHead(Node* &head,int key)
{
	Node* n=new Node(key);

	if(head==NULL)
	{
		n->next=n;
		return n;
	}
	
	//insert key node between head and head->next
	n->next=head->next;
	head->next=n;

	//swap head and key node values
	int t=head->data;
	head->data=n->data;
	n->data=t;

	return head;
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
	insertAtHead(node1,40);
	print(node1);

	return 0;
}