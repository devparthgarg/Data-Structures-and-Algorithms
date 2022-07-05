#include<bits/stdc++.h>
using namespace std;

void kLargest(int a[], int n, int k)//time comp. O((n-k)*logk) ; space comp. O(k)
{
	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < k; i++)
	{
		pq.push(a[i]);
	}

	for (int i = k; i < n; i++)
	{
		if (pq.top() < a[i])
		{
			pq.pop();
			pq.push(a[i]);
		}
	}

	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
}

int main()
{
	int a[] = {5, 15, 10, 20, 8};
	int n = sizeof(a) / sizeof(int);
	int k = 3;

	kLargest(a, n, k);
	return 0;
}