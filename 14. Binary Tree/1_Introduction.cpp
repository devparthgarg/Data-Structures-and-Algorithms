#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

/*
tree traversal :
1. Breadth first (level order)
2. Depth first 
    a.inorder - left root right
    b.preorder - root left right
    c.postorder - left right root
*/

int main()
{
    node* root=new node(10);//for empty tree make root=NULL

    root->left=new node(20);
    root->right=new node(30);

    root->left->left=new node(40);

    return 0;
}