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

node* insert(node* root,int x)//time comp. O(h) ; space comp. O(1)
{
	node* temp=new node(x);
	node* parent=NULL;//parent or previous same thing here
	node* curr=root;

	while(curr!=NULL)
	{
		parent=curr;
		if(curr->data>x)
		{
			curr=curr->left;
		}
		else if(curr->data<x)
		{
			curr=curr->right;
		}
		else//x already present in BST
		{
			return root;
		}
	}

	if(parent==NULL)
	{
		return temp;
	}
	else if(parent->data>x)
	{
		parent->left=temp;
	}	
	else
	{
		parent->right=temp;
	}

	return root;
}

int main()
{

	return 0;
}