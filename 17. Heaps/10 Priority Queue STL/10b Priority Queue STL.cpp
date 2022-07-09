#include<bits/stdc++.h>
using namespace std;

int main()
{
	//declaration (min heap)
	priority_queue<int, vector<int>, greater<int>> pq;

	//insert
	pq.push(10);
	pq.push(15);
	pq.push(5);

	//top (smallest element will be at top)
	cout << pq.top() << endl;

	//size
	cout << pq.size() << endl;

	//iterating
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	return 0;
}