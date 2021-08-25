#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}

void topologicalSort(vector<int> adj[], int v)//time comp. O(V+E) ; space comp. O(V)
{
	vector<int> inDegree(v, 0);

	for (int i = 0; i < v; i++)
	{
		for (auto x : adj[i])
		{
			inDegree[x]++;
		}
	}

	queue<int> q;

	for (int i = 0; i < v; i++)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
		}
	}

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		cout << u << " ";

		for (auto x : adj[u])
		{
			inDegree[x]--;
			if (inDegree[x] == 0)
			{
				q.push(x);
			}
		}
	}
}

int main()
{
	int v = 5;
	vector<int> adj[v];

	addEdge(adj, 0, 2);
	addEdge(adj, 0, 3);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);

	topologicalSort(adj, v);
	return 0;
}