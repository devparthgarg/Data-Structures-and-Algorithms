#include<bits/stdc++.h>
using namespace std;

void unionArrays(int a[], int b[], int m, int n) //time comp. O(m+n) ; space comp. O(1)
{
	int i = 0, j = 0;

	while (i < m and j < n)
	{
		if (i > 0 and a[i] == a[i - 1])
		{
			continue;
		}

		if (j > 0 and b[j] == b[j - 1])
		{
			continue;
		}

		if (a[i] < b[j])
		{
			cout << a[i] << " ";
			i++;
		}
		else if (a[i] > b[j])
		{
			cout << b[j] << " ";
			j++;
		}
		else
		{
			cout << a[i] << " ";
			i++;
			j++;
		}
	}

	while (i < m)
	{
		if (i > 0 and a[i] != a[i - 1])
		{
			cout << a[i] << " ";
		}
		i++;
	}

	while (j < n)
	{
		if (j > 0 and b[j] != b[j - 1])
		{
			cout << b[j] << " ";
		}
		j++;
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