#include<bits/stdc++.h>
using namespace std;

//Trie Class
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

//Time: O(n)
bool search(Trie* root,string &key)
{
	int n=key.size();
	Trie *curr=root;

	for(int i=0;i<n;i++)
	{
		int idx=key[i]-'a';
		if(curr->child[idx]==NULL)
		{
			return false;
		}
		curr=curr->child[idx];
	}

	return curr->isEnd;
}

//Time: O(n)
void insert(Trie* root,string &key)
{
	int n=key.size();
	Trie *curr=root;

	for(int i=0;i<n;i++)
	{
		int idx=key[i]-'a';
		if(curr->child[idx]==NULL)
		{
			curr->child[i]=new Trie();
		}
		curr=curr->child[idx];
	}

	curr->isEnd=true;
}

int main()
{

}