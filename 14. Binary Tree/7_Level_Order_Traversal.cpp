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
Aux Space O(w) , w = width of tree
*/

/*
method 1 : first first height of tree , then print each level using printKthNode , Time comp. O(n*h)
method 2 : queue data structure - queue is FIFO
*/

void levelOrder(node* root)
{
    if(root==NULL)
    {
        return ;
    }

    queue<node*> q;
    q.push(root);

    while(q.empty()==false)
    {
        node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    node* root=new node(10);

    root->left=new node(20);
    root->right=new node(30);

    root->left->left=new node(40);

    levelOrder(root);
    return 0;
}
