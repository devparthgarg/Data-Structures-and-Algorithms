#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int data_)
	{
		data=data_;
		left=NULL;
		right=NULL;
	}
};

/*
Floor in BST:
find the key in BST if present or
find the largest value smaller than 
the key.
*/

//Iterative Implementation
//Time: O(logN)
//Space: O(1)
Node* floor(Node* root,int key)
{
	Node* res=NULL;

	while(root)
	{
		if(root->data==key)
		{
			return root;
		}
		else if(root->data<key)
		{
			res=root;
			root=root->right;
		}
		else
		{
			root=root->left;
		}
	}

	return res;
}

int main()
{
	Node* root=new Node(15);
	root->left=new Node(5);
	root->right=new Node(20);
	root->left->left=new Node(3);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);

	int key=23;

	Node* res=floor(root,key);

	cout<<res->data<<endl;
	return 0;
}