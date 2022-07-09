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
Node* sortedInsert(Node* &head,int key)
{
	Node* n=new Node(key);

	if(head==NULL)
	{
		return n;
	}

	if(key<head->data)
	{
		n->next=head;
		return n;
	}

	Node* curr=head;
	while(curr->next and curr->next->data<key)
	{
		curr=curr->next;
	}

	Node* temp=curr->next;
	curr->next=n;
	n->next=temp;

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
	head=sortedInsert(head,25);
	print(head);

	return 0;
}