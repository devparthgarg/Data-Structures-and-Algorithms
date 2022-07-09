#include<bits/stdc++.h>
using namespace std;

struct Trie
{
	Trie *child[26];
	bool isEnd;

	Trie()
	{
		for(int i=0;i<26;i++)
		{
			child[i]=NULL;
		}

		isEnd=false;
	}
};

bool isEmpty(Trie *root)
{
	for(int i=0;i<26;i++)
	{
		if(root->child[i]!=NULL)
		{
			return false;
		}
	}

	return true;
}

//Time: O(N)
Trie* del(Trie *root,string &key,int i)
{
	if(root==NULL)
	{
		return NULL;
	}

	if(i==key.size())
	{
		root->isEnd=false;
		if(isEmpty(root))
		{
			delete(root);
			root=NULL;
		}

		return root;
	}

	int idx=key[i]-'a';
	root->child[idx]=del(root->child[idx],key,i+1);

	if(isEmpty(root) and root->isEnd==false)
	{
		delete(root);
		root=NULL;		
	}

	return root;
}

int main()
{
	return 0;
}