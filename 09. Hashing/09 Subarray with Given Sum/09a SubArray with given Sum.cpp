#include<bits/stdc++.h>
using namespace std;

bool isSum(int a[], int n, int sum) //time comp. O(n^2) ; space comp. O(1)
{
	for (int i = 0; i < n; i++)
	{
		int curr_sum = 0;
		for (int j = i; j < n; j++)
		{
			curr_sum = curr_sum + a[j];
			if (curr_sum == sum)
			{
				return true;
			}
		}
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