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
//Postorder: Left Right Root
void postorder(Node* root)
{
	if(root==NULL)
	{
		return ;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
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

	postorder(root);
	cout<<endl;
	
	return 0;
}