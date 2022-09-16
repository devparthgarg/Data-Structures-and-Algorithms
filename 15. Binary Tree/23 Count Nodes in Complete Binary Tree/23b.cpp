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
Complete Binary Tree:
All levels are completely filled,
except possibly the last and all nodes
are filled from left to right.
*/

//Time: O(LogN*logN)
//Space: O(H) 
int count(Node* root)
{
	Node* curr=root;

	int lh=0;
	while(curr)
	{
		curr=curr->left;
		lh++;
	}

	curr=root;
	int rh=0;
	while(curr)
	{
		curr=curr->right;
		rh++;
	}

	if(lh==rh)
	{
		return pow(2,lh)-1;
	}
	else
	{
		return 1+count(root->left)+count(root->right);
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

	cout<<count(root)<<endl;
	return 0;
}