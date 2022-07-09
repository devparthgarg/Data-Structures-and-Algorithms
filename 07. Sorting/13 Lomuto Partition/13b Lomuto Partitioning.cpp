#include<bits/stdc++.h>
using namespace std;

//pivot given by user
int lomutoPartition(int a[], int l, int h, int p) //time comp. O(n) ; space comp. O(1)
{
	//make pivot element the last element
	swap(a[p], a[h]);

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
	int arr[] = {10, 80, 30, 90, 40, 50, 70};

	int n = sizeof(arr) / sizeof(int);
	int low = 0;
	int high = n - 1;
	int p = 5;

	display(arr, n);

	cout << lomutoPartition(arr, low, high, p) << endl;

	display(arr, n);

	return 0;
}