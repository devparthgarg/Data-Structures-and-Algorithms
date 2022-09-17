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
Preorder traversal
Approach
*/

//Time: O(N)
//space: O(N)
void serialize(vector<int> &v,Node* root)
{
	if(root==NULL)
	{
		v.push_back(-1);
		return ;
	}

	v.push_back(root->data);
	serialize(v,root->left);
	serialize(v,root->right);
}

//Time: O(N)
//space: O(N)
Node* deserialize(vector<int> v,int &idx)
{
	if(idx==v.size())
	{
		return NULL;
	}

	int val=v[idx++];

	if(val==-1)
	{
		return NULL;
	}

	Node* root=new Node(val);
	root->left=deserialize(v,idx);
	root->right=deserialize(v,idx);

	return root;
}

void levelOrder(Node* root)
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

			cout<<curr->data<<" ";

			if(curr->left)
			{
				q.push(curr->left);
			}

			if(curr->right)
			{
				q.push(curr->right);
			}
		}
		cout<<endl;
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

	vector<int> serial;
	serialize(serial,root);

	for(auto x:serial)
	{
		cout<<x<<" ";
	}
	cout<<endl;

	int idx=0;
	Node* deserial=deserialize(serial,idx);
	
	levelOrder(deserial);
	return 0;
}