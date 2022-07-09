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
Node* insertAtPosition(Node* &head,int key,int p)
{
	Node* n=new Node(key);

	//insert at head
	if(p==1 or head==NULL)
	{
		n->next=head;
		return n;
	}

	//traverse to the just previous node and change pointers
	//jumps are p-2 because we are starting with head
	//and we want previous node for insertion
	Node* curr=head;
	int jumps=1;

	while(curr and jumps<=p-2)
	{
		curr=curr->next;
		jumps++;
	}

	//linked list beyond end
	if(curr==NULL)
	{
		return head;
	}

	Node* nextNode=curr->next;
	curr->next=n;
	n->next=nextNode;

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
	head=insertAtPosition(head,40,2);
	print(head);

	return 0;
}