#include<bits/stdc++.h>
using namespace std;

//trick : use BFS as in BFS we go in shortest path manner
void shortestPath(vector<int> adj[], int v, int s, int dist[])//time comp. O(V+E)
{
	bool visited[v];
	memset(visited, false, sizeof(visited));

	queue<int> q;

	q.push(s);
	visited[s] = true;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		for (auto x : adj[u])
		{
			if (visited[x] == false)
			{
				dist[x] = dist[u] + 1;
				visited[x] = true;
				q.push(x);
			}
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
	int v = 4;
	vector<int> adj[v];

	addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 3);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 3);

	int dist[v];
	memset(dist, INT_MAX, sizeof(dist));

	dist[0] = 0;
	shortestPath(adj, v, 0, dist);

	for (int i = 0; i < v; i++)
	{
		cout << dist[i] << " ";
	}

	return 0;
}