#include<bits/stdc++.h>
using namespace std;

int lomutoPartition(int a[], int l, int h) //time comp. O(n) ; space comp. O(1)
{
	int pivot = a[h];

	int i = l - 1;

	for (int j = l; j <= h - 1; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}

	swap(a[i + 1], a[h]);
	return (i + 1);
}


void quickSort(int a[], int l, int h)
{
	if (l < h)
	{
		//divide
		int p = lomutoPartition(a, l, h);

		//sort
		quickSort(a, l, p - 1);
		quickSort(a, p + 1, h);
	}
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
	int arr[] = {8, 4, 7, 93, 10, 5};
	int n = sizeof(arr) / sizeof(int);

	display(arr, n);
	quickSort(arr, 0, n - 1);
	display(arr, n);

	return 0;
}