#include<bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n) //time comp. O(m*n) ; space comp. O(1)
{
	for (int i = 0; i < m; i++)
	{
		if (i > 0 and a[i] == a[i - 1])
		{
			continue;
		}

		for (int j = 0; j < n; j++)
		{
			if (a[i] == b[j])
			{
				cout << a[i] << " ";
				break;
			}
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