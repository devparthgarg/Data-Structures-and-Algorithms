#include<bits/stdc++.h>
using namespace std;

void dfsRec(vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	cout << s << " ";

	for (auto x : adj[s])
	{
		if (visited[x] == false)
		{
			dfsRec(adj, x, visited);
		}
	}
}

//sorce given and graph may be disconnected
void dfs(vector<int> adj[], int v)//time comp. O(V+E)
{
	bool visited[v];
	memset(visited, false, sizeof(visited));

	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
		{
			dfsRec(adj, i, visited);
		}
	}
}

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main()
{
	int v = 5;
	vector<int> adj[v];

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 3, 4);

	dfs(adj, v);
	return 0;
}