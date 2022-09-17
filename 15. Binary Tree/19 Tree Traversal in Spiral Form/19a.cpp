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
//Space: O(N) W:width of tree
void spiral(Node* root)
{
	if(root==NULL)
	{
		return ;
	}

	stack<Node*> s1;
	stack<Node*> s2;

	s1.push(root);
	while(s1.size() or s2.size())
	{
		while(s1.size())
		{
			Node* temp=s1.top();
			s1.pop();
			cout<<temp->data<<" ";

			if(temp->right)
			{
				s2.push(temp->right);
			}
			if(temp->left)
			{
				s2.push(temp->left);
			}
		}

		while(s2.size())
		{
			Node* temp=s2.top();
			s2.pop();
			cout<<temp->data<<" ";

			if(temp->left)
			{
				s1.push(temp->left);
			}
			if(temp->right)
			{
				s1.push(temp->right);
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

	spiral(root);
	cout<<endl;
	
	return 0;
}