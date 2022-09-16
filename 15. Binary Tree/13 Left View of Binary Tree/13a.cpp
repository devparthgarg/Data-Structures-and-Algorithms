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

/*
print extreme left node 
at each level
*/

//Time: O(N)
//Space: O(W); W:width of tree (Worst Case: W ~ N)
//print first node only at each level
void leftView(Node* root)
{
	if(root==NULL)
	{
		return ;
	}

	queue<Node*> q;
	q.push(root);

	while(q.empty()==false)
	{
		int n=q.size();

		for(int i=0;i<n;i++)
		{
			Node* curr=q.front();
			q.pop();

			if(i==0)
			{
				cout<<curr->data<<" ";				
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
	}
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

	leftView(root);
	cout<<endl;
	
	return 0;
}