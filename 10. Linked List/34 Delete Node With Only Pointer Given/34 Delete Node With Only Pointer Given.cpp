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

//Time: O(1)
//Space: O(1)
void deleteNode(Node* &ptr)
{
	Node* temp=ptr->next;

	if(temp==NULL)
	{
		return ;
	}

	ptr->next=temp->next;
	ptr->data=temp->data;
	delete temp;
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
	node4->next=NULL;

	print(node1);
	deleteNode(node3);
	print(node1);

	return 0;
}