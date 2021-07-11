#include<bits/stdc++.h>
using namespace std;

int unionArray(int a[], int b[], int m, int n) //time comp. O(n)
{
	unordered_set<int> s(a, a + m);

	for (int i = 0; i < n; i++)
	{
		s.insert(b[i]);
	}

	return s.size();
}

int main()
{
	int m, n;
	cin >> m >> n;

	int a[m];
	int b[n];

	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	cout << unionArray(a, b, m, n);
	return 0;
}