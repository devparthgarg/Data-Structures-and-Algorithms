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

void printDLL(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->right;
	}

	return ;
}

//Time: O(N)
//Space: O(W) W:width of tree
Node* pre=NULL;
Node* BTtoDLL(Node* root)
{
	if(root==NULL)
	{
		return root;
	}

	//process left subtree
	Node* head=BTtoDLL(root->left);

	//process current node
	if(pre==NULL)
	{
		head=root;
	}
	else
	{
		root->left=pre;
		pre->right=root;
	}
	pre=root;

	//process right subtree
	BTtoDLL(root->right);

	return head;
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

	Node* head=BTtoDLL(root);
	printDLL(head);
	
	return 0;
}