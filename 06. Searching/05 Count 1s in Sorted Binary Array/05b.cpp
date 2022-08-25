#include<bits/stdc++.h>
using namespace std;

/*
problem is similar as finding first occurrence
because array is binary and sorted so,
if we find first occurrence of 1, then subtract it from
size of array to find count.
*/

int count1s(int a[], int n)//time comp. O(logn)
{
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == 0)
		{
			low = mid + 1;
		}
		else
		{
			if (mid == 0 or a[mid - 1] != a[mid])
			{
				return (n - mid);
			}
			else
			{
				high = mid - 1;
			}
		}
	}

	return 0;
}

int main()
{
	int a[] = {0, 0, 0, 0, 1, 1, 1};
	int n = sizeof(a) / sizeof(int);

	cout << count1s(a, n);
	return 0;
}