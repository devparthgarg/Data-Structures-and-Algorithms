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


int res=0;
int burnTree(Node* root,Node* leaf,int &dist)
{
	if(root==NULL)
	{
		return 0;
	}

	if(root==leaf)
	{
		dist=0;
		return 1;
	}

	int ldist=-1;
	int rdist=-1;

	int lh=burnTree(root->left,leaf,ldist);
	int rh=burnTree(root->right,leaf,rdist);

	if(ldist!=-1)
	{
		dist=ldist+1;
		res=max(res,dist+rh);
	}
	else if(rdist!=-1)
	{
		dist=rdist+1;
		res=max(res,dist+lh);
	}

	return (1+max(lh,rh));
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

	int dist=-1;
	cout<<burnTree(root,root->left->right,dist)<<endl;
	return 0;
}