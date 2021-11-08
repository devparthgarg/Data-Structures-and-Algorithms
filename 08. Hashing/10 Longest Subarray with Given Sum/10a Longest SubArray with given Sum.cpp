#include<bits/stdc++.h>
using namespace std;

int longestSubArray(int a[], int n, int sum) //time comp. O(n^2) ; space comp. O(1)
{
	int res = 0;

	for (int i = 0; i < n; i++)
	{
		int curr_sum = 0;
		for (int j = i; j < n; j++)
		{
			curr_sum = curr_sum + a[j];
			if (curr_sum == sum)
			{
				res = max(res, j - i + 1);
			}
		}
	}

	return res;
}

int main()
{
	int arr[] = {3, 1, 0, 1, 8, 2, 3, 6};
	int n = sizeof(arr) / sizeof(int);
	int sum = 5;

	cout << longestSubArray(arr, n, sum);
	return 0;
}