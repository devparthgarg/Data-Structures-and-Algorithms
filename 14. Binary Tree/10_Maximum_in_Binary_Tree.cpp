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

int getMax(node* root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    
    return max(root->data,max(getMax(root->left),getMax(root->right)));
}

int main()
{
    node* root=new node(10);

    root->left=new node(20);
    root->right=new node(40);

    root->left->left=new node(30);
    root->right->right=new node(50);

    cout<<getMax(root);
    return 0;
}