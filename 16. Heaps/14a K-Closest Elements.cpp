#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
	return p1.second < p2.second;
}

void kClosest(int a[], int n, int x, int k)//time comp. O(n*logn) ; space comp. O(n)
{
	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		v.push_back({a[i], abs(a[i] - x)});
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < k; i++)
	{
		cout << v[i].first << " ";
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