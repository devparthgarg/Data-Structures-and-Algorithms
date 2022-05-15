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
int intersectionPoint(Node* l1,Node* l2)
{
	Node* p1=l1;
	Node* p2=l2;

	if(p1==NULL or p2==NULL)
	{
		return -1;
	}

	while(p1 and p2 and p1!=p2)
	{
		p1=p1->next;
		p2=p2->next;

		if(p1==p2)
		{
			return p1->data;
		}

		if(p1==NULL)
		{
			p1=l2;
		}

		if(p2==NULL)
		{
			p2=l1;
		}
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
	Node* head1=new Node(10);
	Node* node2=new Node(20);
	Node* node3=new Node(30);
	Node* node4=new Node(40);
	Node* node5=new Node(50);
	Node* node6=new Node(60);

	head1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next=node5;
	node5->next=node6;

	Node* head2=new Node(70);
	head2->next=node4;

	print(head1);
	print(head2);

	cout<<intersectionPoint(head1,head2)<<endl;
	return 0;
}