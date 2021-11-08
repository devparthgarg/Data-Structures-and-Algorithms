#include<bits/stdc++.h>
using namespace std;

//trick : replace all 0s with -1 and use function longest subarray with sum equals 0
int longest01(int a[], int n) //time comp. O(n) ; space comp. O(n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			a[i] = -1;
		}
	}

	//find length of longest subarray
	int sum = 0;
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
	int arr[] = {1, 0, 1, 1, 1, 0, 0};
	int n = sizeof(arr) / sizeof(int);

	cout << longest01(arr, n);
	return 0;
}