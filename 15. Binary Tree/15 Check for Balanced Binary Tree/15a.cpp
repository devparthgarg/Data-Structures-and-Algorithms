#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

int height(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	return (1+max(height(root->left),height(root->right)));
}

/*
Balanced Binary Tree:
In a Balanced Binary Tree for every node, 
the difference between heights of left 
subtree and right subtree should not be 
more than one.
*/

//Time: O(N*N)
//Space: O(LogN)
bool balancedTree(Node* root)
{
	if(root==NULL)
	{
		return true;
	}

	int lh=height(root->left);
	int rh=height(root->right);

	return (abs(lh-rh)<=1 and balancedTree(root->left) and balancedTree(root->right));
}

int main()
{
	Node* root=new Node(10);

	root->left=new Node(20);
	root->right=new Node(30);

	root->left->left=new Node(40);
	root->left->right=new Node(50);

	root->right->left=new Node(60);
	root->right->right=new Node(70);

	cout<<balancedTree(root)<<endl;
	return 0;
}