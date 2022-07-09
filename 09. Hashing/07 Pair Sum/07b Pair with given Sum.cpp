#include<bits/stdc++.h>
using namespace std;

bool pairSum(int a[], int n, int sum) //time comp. O(n) ; space comp. O(n)
{
	unordered_set<int> m;

	for (int i = 0; i < n; i++)
	{
		if (m.find(sum - a[i]) != m.end())
		{
			return true;
		}

		m.insert(a[i]);
	}

	return false;
}

int main()
{
	int arr[] = {3, 2, 8, 15, -8};
	int n = sizeof(arr) / sizeof(n);
	int sum = 17;

	cout << pairSum(arr, n, sum);
	return 0;
}