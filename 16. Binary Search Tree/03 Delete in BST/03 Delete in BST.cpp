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
//successor is the left most leaf of the right child
Node* getSuccessor(Node* curr)
{
	curr=curr->right;

	while(curr and curr->left)
	{
		curr=curr->left;
	}

	return curr;
}

Node* del(Node* root,int key)
{
	if(root==NULL)
	{
		return root;
	}

	if(root->data>key)
	{
		root->left=del(root->left,key);
	}
	else if(root->data<key)
	{
		root->right=del(root->right,key);
	}
	else
	{
		if(root->left==NULL)
		{
			Node* temp=root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL)
		{
			Node* temp=root->left;
			delete root;
			return temp;
		}
		else
		{
			Node* suc=getSuccessor(root);
			root->data=suc->data;
			root->right=del(root->right,suc->data);
		}
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

	int key=15;

	root=del(root,key);
	return 0;
}