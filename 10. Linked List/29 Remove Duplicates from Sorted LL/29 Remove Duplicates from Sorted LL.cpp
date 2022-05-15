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
Node* removeDuplicates(Node* &head)
{
	if(head==NULL or head->next==NULL)
	{
		return head;
	}

	Node* curr=head;

	while(curr and curr->next)
	{
		if(curr->data==curr->next->data)
		{
			Node* temp=curr->next;
			curr->next=curr->next->next;
			delete temp;
		}
		else
		{
			curr=curr->next;
		}
	}

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
	head->next=new Node(2\0);
	head->next->next=new Node(20);
	head->next->next->next=new Node(30);
	head->next->next->next->next=new Node(30);

	print(head);
	head=removeDuplicates(head);
	print(head);

	return 0;
}