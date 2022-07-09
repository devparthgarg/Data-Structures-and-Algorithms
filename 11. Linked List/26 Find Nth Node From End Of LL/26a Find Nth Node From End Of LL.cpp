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
void NthNode(Node* &head,int n)
{
	if(head==NULL)
	{
		return ;
	}

	//get length of linked list
	Node* curr=head;
	int len=0;
	while(curr)
	{
		curr=curr->next;
		len++;
	}

	//base case
	if(len<n)
	{
		return ;
	}

	//number of traversals required to reach nth node is (len-n)
	int cnt=0;
	curr=head;

	while(curr and cnt<(len-n))
	{
		curr=curr->next;
		cnt++;
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
	NthNode(head,2);

	return 0;
}