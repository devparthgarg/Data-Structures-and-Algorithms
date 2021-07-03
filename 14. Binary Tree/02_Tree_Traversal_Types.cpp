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

/*

Tree Traversal :
	
	a. Breadth First Traversal (level order traversal)

	b. Depth First Traversal 

		b.1 Inorder Traversal (Left Root Right)
		b.2 Preorder Traversal (Root Left Right)
		b.3 Postorder Traversal (Left Right Root)

*/

int main()
{
	node *root=new node(10);

	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);

	return 0;
}