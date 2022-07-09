#include<bits/stdc++.h>
using namespace std;

int longestSubArray(int a[], int n, int sum) //time comp. O(n) ; space comp. O(n)
{
	unordered_map<int, int> m;
	int pre_sum = 0, res = 0;

	for (int i = 0; i < n; i++)
	{
		pre_sum += a[i];
		if (pre_sum == sum)
		{
			res = i + 1;
		}

		if (m.find(pre_sum) == m.end())
		{
			m.insert({pre_sum, i});
		}

		if (m.find(pre_sum - sum) != m.end())
		{
			res = max(res, i - m[pre_sum - sum]);
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