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
//Space: O(N)
Node* reverse(Node* &head)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}

	Node* n=reverse(head->next);
	head->next->next=head;
	head->next=NULL;
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
	head=reverse(head);
	print(head);

	return 0;
}