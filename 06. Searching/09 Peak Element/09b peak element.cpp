#include<bits/stdc++.h>
using namespace std;

int peak(int a[], int n)//time comp. O(logn)
{
	//base cases
	if (n <= 1)
	{
		return a[0];
	}

	if (a[0] > a[1])
	{
		return a[0];
	}

	if (a[n - 1] > a[n - 2])
	{
		return a[n - 1];
	}

	//main code
	int low = 1;
	int high = n - 2;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (a[mid] > a[mid - 1] and a[mid] > a[mid + 1])
		{
			return a[mid];
		}
		else if (a[mid] < a[mid - 1])
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