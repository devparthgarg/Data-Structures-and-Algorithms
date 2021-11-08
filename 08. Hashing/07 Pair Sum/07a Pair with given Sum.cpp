#include<bits/stdc++.h>
using namespace std;

bool pairSum(int a[], int n, int sum) //time comp. O(n^2) ; space comp. O(1)
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
	int arr[] = {3, 2, 8, 15, -8};
	int n = sizeof(arr) / sizeof(n);
	int sum = 17;

	cout << pairSum(arr, n, sum);
	return 0;
}