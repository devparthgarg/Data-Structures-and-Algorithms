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
void removeLoop(Node* &head)
{
	//detect cycle
	Node* slow=head;
	Node* fast=head;

	while(fast and fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;

		if(slow==fast)
		{
			break;
		}
	}

	//no loop present
	if(slow!=fast)
	{
		return ;
	}

	//remove loop
	slow=head;
	while(slow->next!=fast->next)
	{
		slow=slow->next;
		fast=fast->next;
	}

	fast->next=NULL;
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

	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node2;

	removeLoop(node1);
	print(node1);

	return 0;
}