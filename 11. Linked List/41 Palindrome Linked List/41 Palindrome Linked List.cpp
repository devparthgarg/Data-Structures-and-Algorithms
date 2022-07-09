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

//Time: O(N)
//Space: O(1)
bool palindrome(Node* &head)
{
	if(head==NULL or head->next==NULL)
	{
		return true;
	}

	//get middle of linked list
	Node* slow=head;
	Node* fast=head;

	while(fast and fast->next and fast->next->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}

	//reverse the list after middle part
	slow->next=reverse(slow->next);
	slow=slow->next;

	//check every node from start of list
	Node* curr=head;

	while(slow)
	{
		if(slow->data!=curr->data)
		{
			return false;
		}
		slow=slow->next;
		curr=curr->next;
	}

	return true;
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
	Node* node1=new Node(1);
	Node* node2=new Node(2);
	Node* node3=new Node(3);
	Node* node4=new Node(2);
	Node* node5=new Node(1);

	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;

	print(node1);

	cout<<palindrome(node1)<<endl;
	return 0;
}