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
		cout<<head->data<<" <-> ";
		head=head->right;
	}

	return ;
}

//Time: O(N)
//Space: O(W) W:width of tree
/*
we need to do the inorder traversal of the Tree and while 
doing inorder traversal we can simply maintain a previous 
pointer or reference of the previously traversed node. And change 
right child of the previous node to current node and left child 
of current node as previous.
*/
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
	cout<<endl;
	
	return 0;
}