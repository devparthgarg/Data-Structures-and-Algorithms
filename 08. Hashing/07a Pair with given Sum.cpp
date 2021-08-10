#include<bits/stdc++.h>
using namespace std;

bool pairSum(int a[], int n, int sum) //time comp. O(n^2)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] + a[j] == sum)
			{
				return true;
			}
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