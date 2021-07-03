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

void inorder(node *root)//left root right
{
	if(root==NULL)
	{
		return ;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	node *root=new node(10);

	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);

	inorder(root);
	return 0;
}