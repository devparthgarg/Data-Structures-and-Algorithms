#include<bits/stdc++.h>
using namespace std;

/*
in an unsorted array check if a
pair exists with given sum
*/

bool twoSum(int a[], int n, int sum)//time comp. O(n^2)
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
	int a[] = {3, 5, 9, 2, 8, 10, 11};
	int n = sizeof(a) / sizeof(int);
	int sum = 17;

	cout << twoSum(a, n, sum);
	return 0;
}