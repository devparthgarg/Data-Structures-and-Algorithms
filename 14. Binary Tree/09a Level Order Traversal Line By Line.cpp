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

void levelOrderLineByLine(node *root)//time comp. O(n) ; space comp. O(n)
{
	if (root == NULL)
	{
		return ;
	}

	queue<node*> q;
	q.push(root);
	q.push(NULL);//important step

	while (q.size() > 1)
	{
		node *curr = q.front();
		q.pop();

		if (curr == NULL)
		{
			cout << endl;
			q.push(NULL);
			continue;
		}
		cout << curr->data << " ";

		if (curr->left != NULL)
		{
			q.push(curr->left);
		}
		if (curr->right != NULL)
		{
			q.push(curr->right);
		}
	}
}

int main()
{
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);

	levelOrderLineByLine(root);
	return 0;
}