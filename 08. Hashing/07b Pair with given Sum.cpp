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
		else
		{
			m.insert(a[i]);
		}
	}

	return false;
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

	cout << pairSum(arr, n, sum);
	return 0;
}