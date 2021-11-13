#include<bits/stdc++.h>
using namespace std;

//Adjacency List
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void print(vector<int> adj[], int v)
{
	for (int i = 0; i < v; i++)
	{
		cout << i << " : ";
		for (auto x : adj[i])
		{
			cout << x << " ";
		}
		cout << endl;
	}
}

int main()
{
	int v = 4;
	vector<int> adj[v];

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);

	print(adj, v);
	return 0;
}