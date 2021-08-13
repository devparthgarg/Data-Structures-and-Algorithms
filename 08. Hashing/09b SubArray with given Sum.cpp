#include<bits/stdc++.h>
using namespace std;

bool isSum(int a[], int n, int sum) //time comp. O(n) ; space comp. O(n)
{
	unordered_set<int> s;

	int pre_sum = 0;

	for (int i = 0; i < n; i++)
	{
		pre_sum = pre_sum + a[i];
		if (s.find(pre_sum - sum) != s.end())
		{
			return true;
		}
		if (pre_sum == sum)
		{
			return true;
		}
		s.insert(pre_sum);
	}

	return false;
}

int main()
{
	int arr[] = {5, 8, 6, 13, 3, -1};
	int n = sizeof(arr) / sizeof(int);
	int sum = 22;

	cout << isSum(arr, n, sum);
	return 0;
}