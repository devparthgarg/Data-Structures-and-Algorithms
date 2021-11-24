#include<bits/stdc++.h>
using namespace std;

int naivePartition(int a[], int l, int h, int p) //time comp. O(n) ; space comp. O(n)
{
	int temp[h - l + 1];
	int idx = 0;

	for (int i = l; i <= h; i++)
	{
		if (a[i] < a[p])
		{
			temp[idx] = a[i];
			idx++;
		}
	}

	for (int i = l; i <= h; i++)
	{
		if (a[i] == a[p])
		{
			temp[idx] = a[i];
			idx++;
		}
	}

	//get last occurrence of pivot
	int res = l + (idx - 1);

	for (int i = l; i <= h; i++)
	{
		if (a[i] > a[p])
		{
			temp[idx] = a[i];
			idx++;
		}
	}

	for (int i = l; i <= h; i++)
	{
		a[i] = temp[i - l];
	}

	return res;
}

void display(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[] = {3, 8, 6, 12, 10, 7};

	int n = sizeof(arr) / sizeof(int);
	int low = 0;
	int high = n - 1;
	int p = 1;

	display(arr, n);

	cout << naivePartition(arr, low, high, p) << endl;

	display(arr, n);

	return 0;
}