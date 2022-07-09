#include<bits/stdc++.h>
using namespace std;

int main()
{
	//declaration (max heap)
	priority_queue<int> pq;

	//insert O(logn)
	pq.push(10);
	pq.push(15);
	pq.push(5);

	//top (maximum element will be at top) O(1)
	cout << pq.top() << endl;

	//size O(1)
	cout << pq.size() << endl;

	//iterating
	while (!pq.empty())//empty : O(1)
	{
		cout << pq.top() << " ";
		pq.pop();//O(logn)
	}
	cout << endl;

	return 0;
}