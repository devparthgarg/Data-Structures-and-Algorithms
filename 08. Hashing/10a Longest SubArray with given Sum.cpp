#include<bits/stdc++.h>
using namespace std;

//subarray means contigous elements
int longestSubArray(int a[], int n, int sum) //time comp. O(n^2)
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
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sum;
	cin >> sum;

	cout << longest(arr, n, sum);
	return 0;
}