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

/*
Balanced Binary Tree:
In a Balanced Binary Tree for every node, 
the difference between heights of left 
subtree and right subtree should not be 
more than one.
*/

//Time: O(N)
//Space: O(H)
int balancedTree(Node* root)
{
	if(root==NULL)
	{
		return true;
	}

	int lh=balancedTree(root->left);

	if(lh==-1)
	{
		return -1;
	}

	int rh=balancedTree(root->right);

	if(rh==-1)
	{
		return -1;
	}

	if(abs(lh-rh)>1)
	{
		return -1;
	}
	else
	{
		return max(lh,rh)+1;
	}
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