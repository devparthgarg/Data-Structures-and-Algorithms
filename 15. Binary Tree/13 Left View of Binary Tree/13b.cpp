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
print extreme left node 
at each level
*/

//Time: O(N)
//Space: O(H)
//in preorder traversal we always visits left node first
//level here is curr_level which is to be printed 
int maxLevel=0;
void printLeft(Node* root,int level)
{
	if(root==NULL)
	{
		return ;
	}

	if(maxLevel<level)
	{
		cout<<root->data<<" ";
		maxLevel=level;
	}

	printLeft(root->left,level+1);
	printLeft(root->right,level+1);
}

void leftView(Node* root)
{
	printLeft(root,1);
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

	leftView(root);
	cout<<endl;
	
	return 0;
}