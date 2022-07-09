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
int intersectionPoint(Node* l1,Node* l2)
{
	//insert all nodes of l1 in set
	unordered_set<Node*> s;
	Node* curr=l1;
	while(curr)
	{
		s.insert(curr);
		curr=curr->next;
	}

	//traverse l2 and find every node in set
	curr=l2;
	while(curr)
	{
		if(s.find(curr)!=s.end())
		{
			return curr->data;
		}
		curr=curr->next;
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