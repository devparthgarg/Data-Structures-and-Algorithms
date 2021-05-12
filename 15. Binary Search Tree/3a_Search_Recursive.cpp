#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

bool search(node* root,int x)//time comp. O(h) ; space comp. O(h)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==x)
	{
		return true;
	}
	else if(root->data>x)
	{
		return search(root->left,x);
	}
	else
	{
		return search(root->right,x);
	}
}

int main()
{

	return 0;
}