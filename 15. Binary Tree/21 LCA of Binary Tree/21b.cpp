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

//Time: O(N)
//space: O(H)
Node* LCA(Node* root,Node* p,Node* q)
{
	if(root==NULL or root==p or root==q)
	{
		return root;
	}

	Node* lca1=LCA(root->left,p,q);
	Node* lca2=LCA(root->right,p,q);

	if(lca1 and lca2)
	{
		return root;
	}
	else if(lca1)
	{
		return lca1;
	}
	else
	{
		return lca2;
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

	cout<<LCA(root,root->left->left,root->left->right)->data<<endl;
	return 0;
}