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
void middle(Node* head)
{
	//get length
	Node* curr=head;
	int len=0;
	while(curr)
	{
		curr=curr->next;
		len++;
	}

	//traverse half the length
	len=len/2;
	curr=head;
	while(len--)
	{
		curr=curr->next;
	}

	cout<<curr->data<<endl;
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
	middle(head);

	return 0;
}