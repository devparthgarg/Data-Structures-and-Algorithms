#include<bits/stdc++.h>
using namespace std;

/*
apply bfs on disconnected graphs
*/

void bfs(vector<int> adj[], int s, bool visited[])//time comp. O(V+E)
{
	queue<int> q;
	q.push(s);
	visited[s] = true;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";

		for (int x : adj[u])
		{
			if (visited[x] == false)
			{
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

void bfsDis(vector<int> adj[], int v)
{
	bool visited[v + 1];

	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
		{
			bfs(adj, i, visited);
			cout << endl;
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
	int v = 7;

	vector<int> adj[v];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 2, 3);
	addEdge(adj, 1, 3);
	addEdge(adj, 4, 5);
	addEdge(adj, 5, 6);
	addEdge(adj, 4, 6);

	bfsDis(adj, v);
	return 0;
}