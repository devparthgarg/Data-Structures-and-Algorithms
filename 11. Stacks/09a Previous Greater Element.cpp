#include<bits/stdc++.h>
using namespace std;

void previousGreater(int a[], int n)//time comp. O(n^2) ; space comp. O(1)
{
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > a[i])
			{
				cout << a[j] << " ";
				break;
			}
		}
		if (j == -1)
		{
			cout << -1 << " ";
		}
	}
}

int main()
{
	int arr[] = {15, 10, 18, 12, 4, 6, 2, 9};
	int n = sizeof(arr) / sizeof(int);

	previousGreater(arr, n);
	return 0;
}