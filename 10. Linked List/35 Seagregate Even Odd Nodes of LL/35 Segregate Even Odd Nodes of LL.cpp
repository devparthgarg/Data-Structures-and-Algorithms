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
Node* segregateEvenOdd(Node* &head)
{
	Node* es=NULL;
	Node* ee=NULL;
	Node* os=NULL;
	Node* oe=NULL;

	Node* curr=head;
	while(curr)
	{
		int x=curr->data;

		if(x%2==0)
		{
			if(es==NULL)
			{
				es=curr;
				ee=es;
			}
			else
			{
				ee->next=curr;
				ee=ee->next;
			}
		}
		else
		{
			if(os==NULL)
			{
				os=curr;
				oe=os;
			}
			else
			{
				oe->next=curr;
				oe=oe->next;
			}
		}
		curr=curr->next;
	}

	//list only contains one type of node either even or odd
	if(es==NULL or os==NULL)
	{
		return head;
	}

	ee->next=os;
	oe->next=NULL;

	return es;
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
	Node* node1=new Node(7);
	Node* node2=new Node(6);
	Node* node3=new Node(3);
	Node* node4=new Node(4);
	Node* node5=new Node(5);
	Node* node6=new Node(2);
	Node* node7=new Node(1);

	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	node5->next=node6;
	node6->next=node7;
	node7->next=NULL;

	print(node1);
	node1=segregateEvenOdd(node1);
	print(node1);

	return 0;
}