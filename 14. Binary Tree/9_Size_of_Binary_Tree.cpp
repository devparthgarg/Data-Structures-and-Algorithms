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
Time comp. O(n)
Aux Space O(h) , h=height of tree
*/

int getSize(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return 1+getSize(root->left)+getSize(root->right);
    }
}

int main()
{
    node* root=new node(10);

    root->left=new node(20);
    root->right=new node(30);

    root->left->left=new node(40);

    cout<<getSize(root);
    return 0;
}