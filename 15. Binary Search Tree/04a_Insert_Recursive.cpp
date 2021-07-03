#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* insert(node* root,int x)//time comp. O(h) ; space comp. O(h)
{
	if(root==NULL)
	{
		root=new node(x);
		return root;
	}

	else if(root->data>x)
	{
		root->left=insert(root->left,x);
	}
	else if(root->data<x)
	{
		root->right=insert(root->right,x);
	}

	return root;
}

int main()
{

	return 0;
}