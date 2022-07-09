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

//Recursive Implementation
//Time: O(logN)
//Space: O(logN)
bool search(Node* root,int key)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==key)
	{
		return true;
	}
	else if(root->data>key)
	{
		return search(root->left,key);
	}
	else
	{
		return search(root->right,key);
	}
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

	int key=16;

	cout<<search(root,key)<<endl;
	return 0;
}