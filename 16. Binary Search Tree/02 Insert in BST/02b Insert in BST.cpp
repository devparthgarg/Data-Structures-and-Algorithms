#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int data_)
	{
		data=data_;
		left=NULL;
		right=NULL;
	}
};

//Iterative Implementation
//Time: O(logN)
//Space: O(1)
Node* insert(Node* root,int key)
{
	Node* n=new Node(key);

	Node* parent=NULL;
	Node* curr=root;

	while(curr)
	{
		parent=curr;

		if(curr->data>key)
		{
			curr=curr->left;
		}
		else if(curr->data<key)
		{
			curr=curr->right;
		}
		else
		{
			return root;
		}
	}

	if(parent==NULL)
	{
		return n;
	}
	else if(parent->data>key)
	{
		parent->left=new Node(key);
	}
	else
	{
		parent->right=new Node(key);
	}

	return root;
}

int main()
{
	Node* root=new Node(15);
	root->left=new Node(5);
	root->right=new Node(20);
	root->left->left=new Node(3);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

	int key=19;

	root=insert(root,key);
	return 0;
}