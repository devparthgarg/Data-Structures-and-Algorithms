#include<bits/stdc++.h>
using namespace std;

//no source given and graph mey be disconnected
void bfs(vector<int> adj[], int s, bool visited[])
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

void bfsDis(vector<int> adj[], int v)//time comp. O(V+E)
{
	bool visited[v];
	memset(visited, false, sizeof(visited));

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