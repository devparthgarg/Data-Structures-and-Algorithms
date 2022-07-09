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
	vector<int> v;
	Node* curr=head;

	while(curr)
	{
		v.push_back(curr->data);
		curr=curr->next;
	}

	reverse(v.begin(),v.end());

	curr=head;
	int i=0;
	while(curr)
	{
		curr->data=v[i++];
		curr=curr->next;
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
	head->next=new Node(20);
	head->next->next=new Node(30);

	print(head);
	head=reverse(head);
	print(head);

	return 0;
}