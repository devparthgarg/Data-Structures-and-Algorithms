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
//Space: O(W)
int maximum(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int max_val=INT_MIN;

	queue<Node*> q;
	q.push(root);

	while(q.empty()==false)
	{
		Node* curr=q.front();
		q.pop();

		if(curr)
		{
			max_val=max(max_val,curr->data);
		}

		if(curr->left)
		{
			q.push(curr->left);
		}

		if(curr->right)
		{
			q.push(curr->right);
		}
	}

	return max_val;
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

	cout<<maximum(root)<<endl;
	return 0;
}