#include<bits/stdc++.h>
using namespace std;

int longest01(int a[], int n) //time comp. O(n^2) ; space comp. O(1)
{
	int res = 0;

	for (int i = 0; i < n; i++)
	{
		int c0 = 0, c1 = 0;
		for (int j = i; j < n; j++)
		{
			if (a[j] == 0)
			{
				c0++;
			}
			else
			{
				c1++;
			}

			if (c0 == c1)
			{
				res = max(res, c0 + c1);
			}
		}
	}

	return res;
}

int main()
{
	int arr[] = {1, 0, 1, 1, 1, 0, 0};
	int n = sizeof(arr) / sizeof(int);

	cout << longest01(arr, n);
	return 0;
}