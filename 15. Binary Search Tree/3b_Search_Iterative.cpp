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

bool search(node* root,int x)//time comp. O(h) ; space comp. O(1)
{
	while(root!=NULL)
	{
		if(root->data==x)
		{
			return true;
		}
		else if(root->data>x)
		{
			root=root->left;
		}
		else
		{
			root=root->right;
		}
	}

	return false;
}

int main()
{

	return 0;
}