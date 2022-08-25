#include<bits/stdc++.h>
using namespace std;

/*
in an unsorted array check if a
triplet exists with given sum
*/

bool threeSum(int a[], int n, int sum)//time comp. O(n^3)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[i] + a[j] + a[k] == sum)
				{
					return true;
				}
			}
		}
	}

	return false;
}

int main()
{
	int a[] = {3, 2, 8, 4, 20, 9, 40};
	int n = sizeof(a) / sizeof(int);
	int sum = 32;

	cout << threeSum(a, n, sum);
	return 0;
}