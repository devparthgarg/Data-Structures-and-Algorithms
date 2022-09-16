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

void nodesAtKDistance(Node* root,int k)
{
	if(root==NULL)
	{
		return ;
	}

	if(k==0)
	{
		cout<<root->data<<" ";
	}
	else
	{
		nodesAtKDistance(root->left,k-1);
		nodesAtKDistance(root->right,k-1);
	}
}

//Time: O(N*LogN)
//Space: O(logN)
void levelOrder(Node* root)
{
	//get height of tree
	int h=height(root);

	//print each level
	for(int i=0;i<h;i++)
	{
		nodesAtKDistance(root,i);
		cout<<endl;
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

	levelOrder(root);
	return 0;
}