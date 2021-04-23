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

//print (k+1)th level
void printKthNode(node* root,int k)
{
    if(root==NULL)
    {
        return ;
    }

    if(k==0)
    {
        cout<<root->data<<" ";
    }
    else
    {
        printKthNode(root->left,k-1);
        printKthNode(root->right,k-1);
    }
}

int main()
{
    node* root=new node(10);

    root->left=new node(20);
    root->right=new node(30);

    root->left->left=new node(40);

    int k;
    cin>>k;

    printKthNode(root,k);
    return 0;
}