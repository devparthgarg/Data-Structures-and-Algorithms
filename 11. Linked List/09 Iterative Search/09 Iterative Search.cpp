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
int search(Node* head,int key)
{
	int pos=1;

	while(head)
	{
		if(head->data==key)
		{
			return pos;
		}
		head=head->next;
		pos++;
	}

	return -1;
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

	cout<<search(head,20)<<endl;
	return 0;
}