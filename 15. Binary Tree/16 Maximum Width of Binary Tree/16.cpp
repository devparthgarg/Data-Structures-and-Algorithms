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
//Space: O(W) W:width of tree
int maxWidth(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int max_width=0;

	queue<Node*> q;
	q.push(root);

	while(q.empty()==false)
	{
		int n=q.size();
		max_width=max(max_width,n);

		for(int i=0;i<n;i++)
		{
			Node* curr=q.front();
			q.pop();

			if(curr->left)
			{
				q.push(curr->left);
			}

			if(curr->right)
			{
				q.push(curr->right);
			}
		}
	}

	return max_width;
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

	cout<<maxWidth(root)<<endl;
	return 0;
}