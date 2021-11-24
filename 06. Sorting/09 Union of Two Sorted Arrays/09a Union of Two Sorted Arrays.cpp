#include<bits/stdc++.h>
using namespace std;

void unionArrays(int a[], int b[], int m, int n) //time comp. O((m+n)*log(m+n)) ; space comp. O(m+n)
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
		if (i == 0 or (i > 0 and c[i] != c[i - 1]))
		{
			cout << c[i] << " ";
		}
	}
}

int main()
{
	int a[] = {2, 5, 8};
	int b[] = {2, 4, 9, 10, 15};

	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);

	unionArrays(a, b, m, n);
	return 0;
}