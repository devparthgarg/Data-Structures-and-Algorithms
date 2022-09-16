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
int size(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}

	int count=0;

	queue<Node*> q;
	q.push(root);

	while(q.empty()==false)
	{
		Node* curr=q.front();
		q.pop();

		count++;

		if(curr->left)
		{
			q.push(curr->left);
		}

		if(curr->right)
		{
			q.push(curr->right);
		}
	}

	return count;
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

	cout<<size(root)<<endl;
	return 0;
}