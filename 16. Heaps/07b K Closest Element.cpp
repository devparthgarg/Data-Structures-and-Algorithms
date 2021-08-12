#include<bits/stdc++.h>
using namespace std;

//Efficient Method (better than previous in most cases)
void kClosest(int a[], int n, int x, int k)//time comp. O(n*logn) ; space comp. O(n)
{
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	for (int i = 0; i < n; i++)
	{
		pq.push({abs(a[i] - x), a[i]});
	}

	for (int i = 0; i < k; i++)
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