#include<bits/stdc++.h>
using namespace std;

/*
Equilibrium Point :
A point such that sum of elements before it
equals sum of element after it.
*/

bool isEquilibrium(int a[], int n)//time comp. O(n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}

	int left_sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (left_sum == sum - a[i])//sum-a[i] is same as right_sum
		{
			return true;
		}
		left_sum += a[i];
		sum -= a[i];
	}

	return false;
}

int main()
{
	int a[] = {3, 4, 8, -9, 20, 6};
	int n = sizeof(a) / sizeof(int);

	cout << isEquilibrium(a, n);
	return 0;
}