#include<bits/stdc++.h>
using namespace std;

void kClosest(int a[], int n, int x, int k)//time comp. O(n*logk) ; space comp. O(k)
{
	priority_queue<pair<int, int>> pq;

	for (int i = 0; i < k; i++)
	{
		pq.push({abs(a[i] - x), a[i]});
	}

	for (int i = k; i < n; i++)
	{
		int diff = abs(a[i] - x);
		if (pq.top().first > diff)
		{
			pq.pop();
			pq.push({diff, a[i]});
		}
	}

	while (!pq.empty())
	{
		cout << pq.top().second << " ";
		pq.pop();
	}
}

int main()
{
	int a[] = {10, 30, 5, 40, 38, 80, 70};
	int n = sizeof(a) / sizeof(int);
	int x = 35;
	int k = 3;

	kClosest(a, n, x, k);
	return 0;
}