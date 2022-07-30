#include<bits/stdc++.h>
using namespace std;

//time: O(n)
bool isEquilibrium(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}

	int left_sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (left_sum == sum - a[i])
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