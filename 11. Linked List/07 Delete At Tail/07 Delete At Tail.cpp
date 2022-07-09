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
Node* deleteAtTail(Node* &head)
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

	//traverse to the second last node and make its next NULL
	Node* curr=head;
	while(curr->next->next)
	{
		curr=curr->next;
	}

	//delete curr next node
	delete curr->next;
	curr->next=NULL;

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
	head=deleteAtTail(head);
	print(head);

	return 0;
}