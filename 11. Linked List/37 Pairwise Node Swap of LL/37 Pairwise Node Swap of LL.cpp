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
Node* pairSwap(Node* &head)
{
	Node* curr=head;
	while(curr and curr->next)
	{
		swap(curr->data,curr->next->data);
		curr=curr->next->next;
	}

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
	Node* node4=new Node(40);
	Node* node5=new Node(50);

	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;

	print(node1);
	node1=pairSwap(node1);
	print(node1);

	return 0;
}