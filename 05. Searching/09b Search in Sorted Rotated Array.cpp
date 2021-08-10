#include<bits/stdc++.h>
using namespace std;

/*
Efficient solution : (using binary search)
find mid element and compare with left corner element
and right corner element if left corner is smaller or equal
to mid element then apply binary search in left part of mid
element , accordingly for comparison with right corner element
*/

int searchRotated(int a[], int n, int key) //time comp. O(logn) ; space comp. O(1)
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
		if (a[low] < a[mid]) //left part is sorted
		{
			if (a[low] <= key and key < a[mid])
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
		else//right part is sorted
		{
			if (a[mid]<key and a[high] >= key)
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
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int key;
	cin >> key;

	cout << searchRotated(a, n, key);
	return 0;
}