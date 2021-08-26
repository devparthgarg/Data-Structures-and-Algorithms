#include<bits/stdc++.h>
using namespace std;

//Adjacenecy Matrix
class Graph
{
	bool **adj;
	int v;

public:

	//constructor
	Graph(int vertices)
	{
		v = vertices;
		adj = new bool *[v];

		//intialise matrix
		for (int i = 0; i < v; i++)
		{
			adj[i] = new bool[v];
			for (int j = 0; j < v; j++)
			{
				adj[i][j] = false;
			}
		}
	}

	//add edge
	void addEdge(int i, int j)
	{
		adj[i][j] = true;
		adj[j][i] = true;
	}

	//remove edge
	void removeEdge(int i, int j)
	{
		adj[i][j] = false;
		adj[j][i] = false;
	}

	//print matrix
	void print()
	{
		for (int i = 0; i < v; i++)
		{
			cout << i << " : ";
			for (int j = 0; j < v; j++)
			{
				cout << adj[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	Graph g(4);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);

	g.print();
	return 0;
}