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
void print(Node* head)
{
	if(head==NULL)
	{
		return ;
	}

	cout<<head->data<<" ";
	print(head->next);
}

int main()
{
	Node* head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);

	print(head);
	cout<<endl;
	
	return 0;
}