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
//Space: O(N) 
void spiral(Node* root)
{
	deque<Node*> dq;
    dq.push_back(root);
    bool reverse = true;

	while(dq.size()) 
	{
        int n = dq.size();
        if(reverse==false) 
        {
            for(int i = 0; i < n; i++) 
            { 
                if (dq.front()->left != NULL)
                {
                    dq.push_back(dq.front()->left);
                }
                if(dq.front()->right != NULL)
                {
                    dq.push_back(dq.front()->right);
                }
                cout << dq.front()->data <<" ";
                dq.pop_front();
            }
            reverse = !reverse;
        }
        else 
        {
            while (n--) 
            {
                if (dq.back()->right != NULL)
                {
                    dq.push_front(dq.back()->right);
                }
                if (dq.back()->left != NULL)
                {
                    dq.push_front(dq.back()->left);
                }
                cout << dq.back()->data <<" ";
                dq.pop_back();
            }
            reverse = !reverse;
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