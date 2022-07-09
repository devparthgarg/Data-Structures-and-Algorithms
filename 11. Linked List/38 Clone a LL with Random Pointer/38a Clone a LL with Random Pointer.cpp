#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node* random;

	Node(int data_)
	{
		data=data_;
		next=NULL;
		random=NULL;
	}
};

//Time: O(N)
//Space: O(N)
Node* clone(Node* &head)
{
	unordered_map<Node*,Node*> m;

	Node* curr=head;
	while(curr)
	{
		m[curr]=new Node(curr->data);
		curr=curr->next;
	}

	curr=head;
	while(curr)
	{
		Node* temp=m[curr];
		temp->next=m[curr->next];
		temp->random=m[curr->random];
		curr=curr->next;
	}
	Node* res=m[head];

	return res;
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
	Node* res=clone(node1);
	print(res);

	return 0;
}