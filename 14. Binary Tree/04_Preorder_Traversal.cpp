#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *left;
	node *right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

void preorder(node *root)//root left right
{
	if(root==NULL)
	{
		return ;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int main()
{
	node *root=new node(10);

	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);

	preorder(root);
	return 0;
}