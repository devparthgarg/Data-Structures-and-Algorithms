#include<bits/stdc++.h>
using namespace std;

void dfsRec(vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;

	for (auto x : adj[s])
	{
		if (visited[x] == false)
		{
			dfsRec(adj, x, visited);
		}
	}
}

//count number of connected components
int dfs(vector<int> adj[], int v)//time comp. O(V+E)
{
	bool visited[v];
	memset(visited, false, sizeof(visited));
	int cnt = 0;

	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
		{
			dfsRec(adj, i, visited);
			cnt++;
		}
	}

	return cnt;
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
	int s = 0;

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 3, 4);

	cout << dfs(adj, v);
	cout << endl;

	return 0;
}