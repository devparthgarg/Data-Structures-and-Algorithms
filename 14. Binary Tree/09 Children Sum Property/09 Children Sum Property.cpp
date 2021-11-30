#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node *left;
	node *right;

	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

bool isChildrenSum(node *root)//time comp. O(n) ; space comp. O(h) ; h:height of tree (logn)
{
	if (root == NULL)
	{
		return true;
	}

	if (root->left == NULL and root->right == NULL)
	{
		return true;
	}

	int sum = 0;

	if (root->left != NULL)
	{
		sum += root->left->data;
	}
	if (root->right != NULL)
	{
		sum += root->right->data;
	}

	return (root->data == sum and isChildrenSum(root->left) and isChildrenSum(root->right));
}

int main()
{
	node *root = new node(8);
	root->left = new node(6);
	root->right = new node(2);
	root->left->left = new node(4);
	root->left->right = new node(2);

	cout << isChildrenSum(root);
	return 0;
}