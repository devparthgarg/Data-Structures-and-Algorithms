#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n) //time comp. O((m+n)*log(m+n)) ; space comp. O(m+n)
{
	int c[m + n];

	for (int i = 0; i < m; i++)
	{
		c[i] = a[i];
	}

	for (int i = 0; i < n; i++)
	{
		c[m + i] = b[i];
	}

	sort(c, c + m + n);

	for (int i = 0; i < (m + n); i++)
	{
		cout << c[i] << " ";
	}
}

int main()
{
	int a1[] = {1, 3, 5, 7, 9};
	int a2[] = {2, 4, 6, 8};

	int n1 = sizeof(a1) / sizeof(int);
	int n2 = sizeof(a2) / sizeof(int);

	merge(a1, a2, n1, n2);
	return 0;
}