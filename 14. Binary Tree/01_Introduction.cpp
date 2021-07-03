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
			Tree made here is :

					10
					/\
				  20  30
				  /\  /\
				 40	N N N
				 /\
				N  N

			N : Null 
*/

int main()
{
	node *root=new node(10);

	root->left=new node(20);
	root->right=new node(30);
	root->left->left=new node(40);

	return 0;
}