#include<bits/stdc++.h>
using namespace std;

/*
Efficient solution : (using binary search)
find mid element and compare with left corner element
and right corner element if left corner is smaller or equal
to mid element then apply binary search in left part of mid
element , accordingly for comparison with right corner element
*/

int searchRotated(int a[], int n, int key)//time comp. O(logn)
{
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] == key)
		{
			return mid;
		}

		//left part is sorted
		if (a[low] <= a[mid])
		{
			if (a[low] == key)
			{
				return low;
			}
			else if (a[low] < key and key < a[mid])
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		//right part is sorted
		else
		{
			if (a[high] == key)
			{
				return high;
			}
			else if (a[mid]<key and a[high] > key)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
	}

	return -1;
}

int main()
{
	int a[] = {10, 20, 30, 40, 50, 8, 9};
	int n = sizeof(a) / sizeof(int);
	int key = 30;

	cout << searchRotated(a, n, key);
	return 0;
}