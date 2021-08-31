#include<bits/stdc++.h>
using namespace std;

//Kahn's BFS based algorithm
void topologicalSort(vector<int> adj[], int V)//time comp. O(V+E)
{
	vector<int> in_degree(V, 0);

	for (int u = 0; u < V; u++)
	{
		for (auto x : adj[u])
		{
			in_degree[x]++;
		}
	}

	queue<int> q;

	for (int i = 0; i < V; i++)
	{
		if (in_degree[i] == 0)
		{
			q.push(i);
		}
	}

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";

		for (int x : adj[u])
		{
			in_degree[x]--;
			if (in_degree[x] == 0)
			{
				q.push(x);
			}
		}
	}
}

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}

int main()
{
	int V = 5;
	vector<int> adj[V];

	addEdge(adj, 0, 2);
	addEdge(adj, 0, 3);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);

	topologicalSort(adj, V);
	return 0;
}