#include<bits/stdc++.h>
using namespace std;

int intersection(int a[], int b[], int m, int n) //time comp. O(max(m,n)) ; space comp. O(m+n)
{
	unordered_set<int> sa(a, a + m);
	unordered_set<int> sb(b, b + n);

	int cnt = 0;
	for (auto x : sa)
	{
		if (sb.count(x) > 0)
		{
			cnt++;
		}
	}

	return cnt;
}

int main()
{
	int a[] = {10, 15, 20, 5, 30};
	int b[] = {30, 5, 30, 80};

	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);

	cout << intersection(a, b, m, n);
	return 0;
}