#include<bits/stdc++.h>
using namespace std;

/*
Equilibrium Point :
A point such that sum of elements before it
equals sum of element after it.
*/

//time: O(n*n)
bool isEquilibrium(int a[], int n)
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
	int arr[] = {3, 4, 8, -9, 20, 6};
	int n = sizeof(arr) / sizeof(int);

	cout << isEquilibrium(arr, n) << endl;
	return 0;
}