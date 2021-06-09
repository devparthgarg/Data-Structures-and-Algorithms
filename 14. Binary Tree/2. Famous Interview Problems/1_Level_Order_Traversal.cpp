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
		data=d;
		left=NULL;
		right=NULL;
	}
};

void levelOrder(node *root)//time comp. O(n) ; space comp. O(n)
{
	if(root==NULL)
	{
		return ;
	}

	queue<node*> q;
	q.push(root);

	while(q.empty()==false)
	{
		node *curr=q.front();
		q.pop();

		cout<<curr->data<<" ";
		
		if(curr->left!=NULL)
		{
			q.push(curr->left);
		}
		if(curr->right!=NULL)
		{
			q.push(curr->right);
		}
	}
}

int main()
{
	node *root=new node(10);

	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);

	levelOrder(root);
	return 0;
}