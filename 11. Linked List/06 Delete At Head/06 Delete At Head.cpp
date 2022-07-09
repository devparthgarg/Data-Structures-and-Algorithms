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
Node* deleteAtHead(Node* &head)
{
	if(head==NULL)
	{
		return NULL;
	}

	Node* curr=head;
	head=head->next;
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
	Node* head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);

	print(head);
	head=deleteAtHead(head);
	print(head);

	return 0;
}