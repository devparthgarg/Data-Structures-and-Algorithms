#include<bits/stdc++.h>
using namespace std;

void nextGreater(int a[], int n)//time comp. O(n^2) ; space comp. O(1)
{
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] > a[i])
			{
				cout << a[j] << " ";
				break;
			}
		}
		if (j == n)
		{
			cout << -1 << " ";
		}
	}
}

int main()
{
	int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
	int n = sizeof(arr) / sizeof(int);

	nextGreater(arr, n);
	return 0;
}