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
//Space: O(H)
//K values: [0,Height-1]
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

int main()
{
	Node* root=new Node(10);

	root->left=new Node(20);
	root->right=new Node(30);

	root->left->left=new Node(40);
	root->left->right=new Node(50);

	root->right->left=new Node(60);
	root->right->right=new Node(70);

	nodesAtKDistance(root,2);
	cout<<endl;

	return 0;
}