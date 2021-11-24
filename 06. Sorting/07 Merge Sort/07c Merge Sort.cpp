#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
	int n1 = mid - low + 1;
	int n2 = high - mid;

	int left[n1];
	int right[n2];

	for (int i = 0; i < n1; i++)
	{
		left[i] = a[low + i];
	}

	for (int i = 0; i < n2; i++)
	{
		right[i] = a[mid + 1 + i];
	}

	int i = 0, j = 0, k = low;

	while (i < n1 and j < n2)
	{
		if (left[i] <= right[j])
		{
			a[k] = left[i];
			k++;
			i++;
		}
		else
		{
			a[k] = right[j];
			k++;
			j++;
		}
	}

	while (i < n1)
	{
		a[k] = left[i];
		k++;
		i++;
	}

	while (j < n2)
	{
		a[k] = right[j];
		k++;
		j++;
	}
}

void mergeSort(int a[], int low, int high) //time comp. O(n*logn) ; space comp. O(n) ; stable algorithm
{
	if (low < high) //at least two elements should be there
	{
		//divide
		int mid = low + (high - low) / 2; //same as (low+high)/2 (to avoid overflow (high-low) is done)

		//sorting
		mergeSort(a, low, mid);
		mergeSort(a, mid + 1, high);

		//merging
		merge(a, low, mid, high);
	}
}

int main()
{
	int a[] = {3, 2, 4, 1, 5};
	int n = sizeof(a) / sizeof(int);

	int low = 0;
	int high = n - 1;

	mergeSort(a, low, high);

	for (int x : a)
	{
		cout << x << " ";
	}
	return 0;
}