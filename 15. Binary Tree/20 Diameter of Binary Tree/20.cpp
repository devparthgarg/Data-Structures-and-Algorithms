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
int res=0;
int diameter(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int lh=diameter(root->left);
	int rh=diameter(root->right);
	res=max(res,1+lh+rh);

	return 1+max(lh,rh);
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

	diameter(root);

	cout<<res<<endl;
	return 0;
}