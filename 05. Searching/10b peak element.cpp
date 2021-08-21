#include<bits/stdc++.h>
using namespace std;

int peak(int a[], int n) //time comp. O(logn)
{
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if ((mid == 0 or a[mid - 1] < a[mid]) and (mid == n - 1 or a[mid] > a[mid + 1]))
		{
			return a[mid];
		}

		if (mid > 0 and a[mid - 1] > a[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return -1;
}

int main()
{
	int a[] = {5, 10, 20, 15, 7};
	int n = sizeof(a) / sizeof(int);

	cout << peak(a, n);
	return 0;
}