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

//Recursive Implementation
//Time: O(logN)
//Space: O(logN)
Node* insert(Node* root,int key)
{
	if(root==NULL)
	{
		Node* n=new Node(key);
		return n;
	}
	else if(root->data>key)
	{
		root->left=insert(root->left,key);
	}
	else if(root->data<key)
	{
		root->right=insert(root->right,key);
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