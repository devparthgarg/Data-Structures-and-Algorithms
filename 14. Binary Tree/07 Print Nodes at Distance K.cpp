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

void nodeAtDistanceK(node *root, int k) //time comp. O(n) ; space comp. O(h) ; h:height of tree (logn)
{
	if (root == NULL)
	{
		return ;
	}

	if (k == 0)
	{
		cout << root->data << " ";
	}
	else
	{
		nodeAtDistanceK(root->left, k - 1);
		nodeAtDistanceK(root->right, k - 1);
	}
}

int main()
{
	node *root = new node(10);

	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);

	nodeAtDistanceK(root, 1);
	return 0;
}