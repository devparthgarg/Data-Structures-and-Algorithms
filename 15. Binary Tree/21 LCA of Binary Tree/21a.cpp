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

bool path(Node* root,vector<Node*> &v,Node* n)
{
	if(root==NULL)
	{
		return false;
	}

	v.push_back(root);

	if(root==n)
	{
		return true;
	}

	if(path(root->left,v,n) or path(root->right,v,n))
	{
		return true;
	}

	v.pop_back();

	return false;
}

//Time: O(N)
//space: O(N)
Node* LCA(Node* root,Node* p,Node* q)
{
	vector<Node*> path1,path2;

	if(path(root,path1,p)==false or path(root,path2,q)==false)
	{
		return NULL;
	}

	for(int i=0;i<path1.size()-1 and i<path2.size()-1;i++)
	{
		if(path1[i+1]!=path2[i+1])
		{
			return path1[i];
		}
	}

	return NULL;
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