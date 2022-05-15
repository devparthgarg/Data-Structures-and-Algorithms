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

//Time: O(N)
//Space: O(1)
Node* deleteKthNode(Node* &head,int k)
{
	if(head==NULL)
	{
		return NULL;
	}	

	if(k==1)
	{
		return deleteAtHead(head);
	}

	//make jumps and delete
	Node* curr=head;
	int jumps=0;
	while(curr and jumps<k-2)
	{
		curr=curr->next;
		jumps++;
	}

	Node* temp=curr->next;
	curr->next=curr->next->next;
	delete temp;

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
	node1=deleteKthNode(node1,3);
	print(node1);

	return 0;
}