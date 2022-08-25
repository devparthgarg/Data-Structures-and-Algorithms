#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = {3, 2, 4};
	int n = sizeof(a) / sizeof(int);

	//make priority queue using an existing array/vector
	priority_queue<int> pq(a, a + n);//O(n) (iterating and pushing will take more time)

	//iterating
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}

	return 0;
}