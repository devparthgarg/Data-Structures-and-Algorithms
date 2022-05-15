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
Node* reverse(Node* &head)
{
	Node* curr=head;
	Node* prev=NULL;

	while(curr)
	{
		Node* nextNode=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextNode;
	}

	return prev;
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
	head=reverse(head);
	print(head);

	return 0;
}