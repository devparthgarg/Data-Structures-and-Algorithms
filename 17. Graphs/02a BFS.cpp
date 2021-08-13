#include<bits/stdc++.h>
using namespace std;

/*
given undirected graph and source
vertex find bfs
*/

void bfs(vector<int> adj[], int v, int s)//time comp. O(V+E)
{
	bool visited[v + 1];

	//mark all false
	memset(visited, false, sizeof(visited));

	//make queue and push source
	queue<int> q;
	q.push(s);

	//as source is pushed into queue so mark it visited
	visited[s] = true;

	//while queue is not empty traverse
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
	addEdge(adj, 2, 3);
	addEdge(adj, 1, 3);
	addEdge(adj, 3, 4);
	addEdge(adj, 2, 4);

	bfs(adj, v, 0);
	return 0;
}