#include<bits/stdc++.h>
using namespace std;

/*
1.minimise the maximum pages allocated
2.only contigous pages can be allocated
*/

int sum(int a[], int b, int e)
{
	int s = 0;
	for (int i = b; i <= e; i++)
	{
		s = s + a[i];
	}

	return s;
}

//Naive Method (n-1)C(k-1) ways to chose
int minPages(int a[], int n, int k)//time comp. O(exponential)
{
	if (k == 1)
	{
		return sum(a, 0, n - 1);
	}

	if (n == 1)
	{
		return a[0];
	}

	int res = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		res = min(res, max(minPages(a, i, k - 1), sum(a, i, n - 1)));
	}

	return res;
}

int main()
{
	int a[] = {10, 20, 30, 40};
	int n = sizeof(a) / sizeof(int);
	int k = 2;

	cout << minPages(a, n, k);
	return 0;
}