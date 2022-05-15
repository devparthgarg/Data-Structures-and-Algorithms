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
//Space: O(N/K)
Node* reverseKgroup(Node* &head,int k)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}

	//modified reverse function
	Node* curr=head;
	Node* prev=NULL;
	Node* nextNode=NULL;
	int count=0; 

	while(curr and count<k)
	{
		nextNode=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextNode;
		count++;
	}

	if(nextNode)
	{
		Node* restHead=reverseKgroup(nextNode,k);
		head->next=restHead;
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
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);

	print(head);
	head=reverseKgroup(head,2);
	print(head);

	return 0;
}