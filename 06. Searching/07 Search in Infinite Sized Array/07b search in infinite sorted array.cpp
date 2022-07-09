#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int h, int key)
{
	while (l <= h)
	{
		int mid = (l + h) / 2;
		if (a[mid] == key)
		{
			return mid;
		}
		else if (a[mid] > key)
		{
			h = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}

	return -1;
}

//unbounded binary search
int searchInfinite(int a[], int key) //time comp. O(logp) ; p:position or index in array
{
	if (a[0] == key)
	{
		return 0;
	}

	int i = 1;

	while (a[i] < key)
	{
		i = i * 2;
	}

	if (a[i] == key)
	{
		return i;
	}

	return binarySearch(a, (i / 2) + 1, i - 1, key);
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

	cout << searchInfinite(a, key);
	return 0;
}