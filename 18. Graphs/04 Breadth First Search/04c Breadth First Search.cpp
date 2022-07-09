#include<bits/stdc++.h>
using namespace std;

//find number of islands problem or find number of connected components
void bfs(vector<int> adj[], int s, bool visited[])
{
	queue<int> q;
	q.push(s);
	visited[s] = false;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

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

int bfsCon(vector<int> adj[], int v)//time comp. O(V+E)
{
	bool visited[v];
	memset(visited, -1, sizeof(visited));

	int cnt = 0;
	for (int i = 0; i < v; i++)
	{
		if (visited[i] == false)
		{
			bfs(adj, i, visited);
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
	int v = 11;
	vector<int> adj[v];

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 2, 3);
	addEdge(adj, 1, 3);
	addEdge(adj, 4, 5);
	addEdge(adj, 5, 6);
	addEdge(adj, 4, 6);
	addEdge(adj, 7, 8);
	addEdge(adj, 9, 10);

	cout << bfsCon(adj, v);
	cout << endl;

	return 0;
}