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

//Time: O(n)
//Space: O(n)
void iterativeInorder(Node* root)
{
	stack<Node*> st;
	Node* curr=root;

	while(curr or st.empty()==false)
	{
		while(curr)
		{
			st.push(curr);
			curr=curr->left;
		}

		curr=st.top();
		st.pop();

		cout<<curr->data<<" ";

		curr=curr->right;
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

	iterativeInorder(root);
	
	return 0;
}