#include<bits/stdc++.h>
using namespace std;

int unionArray(int a[], int b[], int m, int n) //time comp. O(n) ; space comp. O(m+n)
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
	int a[] = {15, 20, 5, 15};
	int b[] = {15, 15, 15, 20, 10};

	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);

	cout << unionArray(a, b, m, n);
	return 0;
}