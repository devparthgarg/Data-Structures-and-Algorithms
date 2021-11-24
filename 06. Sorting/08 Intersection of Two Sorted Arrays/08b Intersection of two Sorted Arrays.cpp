#include<bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n) //time comp. O(m+n) ; space comp. O(1)
{
	int i = 0, j = 0;

	while (i < m and j < n)
	{
		if (i > 0 and a[i] == a[i - 1])
		{
			i++;
			continue;
		}

		if (a[i] < b[j])
		{
			i++;
		}
		else if (a[i] > b[j])
		{
			j++;
		}
		else
		{
			cout << a[i] << " ";
			i++;
			j++;
		}
	}
}

int main()
{
	int a[] = {3, 5, 10, 10, 10, 15, 15, 20};
	int b[] = {5, 10, 10, 15, 30};

	int m = sizeof(a) / sizeof(int);
	int n = sizeof(b) / sizeof(int);

	intersection(a, b, m, n);
	return 0;
}