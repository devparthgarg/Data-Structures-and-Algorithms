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
	n->next=head;

	return n;
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
	head=insertAtHead(head,40);
	print(head);

	return 0;
}