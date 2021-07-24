#include<bits/stdc++.h>
using namespace std;

/*
Equilibrium Point :
A point such that sum of elements before it
equals sum of element after it.
*/

bool isEquilibrium(int a[], int n)//time comp. O(n^2)
{
	for (int i = 0; i < n; i++)
	{
		int left_sum = 0;
		for (int j = 0; j < i; j++)
		{
			left_sum += a[j];
		}

		int right_sum = 0;
		for (int j = i + 1; j < n; j++)
		{
			right_sum += a[j];
		}

		if (left_sum == right_sum)
		{
			return true;
		}
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