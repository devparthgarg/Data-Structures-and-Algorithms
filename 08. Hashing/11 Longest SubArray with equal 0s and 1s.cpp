#include<bits/stdc++.h>
using namespace std;

//subarray means contigous elements
int longest01(int a[], int n) //time comp. O(n^2)
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
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << longest01(arr, n);
	return 0;
}