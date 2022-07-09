#include<bits/stdc++.h>
using namespace std;

//considering first element as the pivot element
int hoareParition(int a[], int l, int h) //time comp. O(n) ; space comp. O(1)
{
	int pivot = a[l];

	int i = l - 1;
	int j = h + 1;

	while (true)
	{
		do
		{
			i++;
		} while (a[i] < pivot);

		do
		{
			j--;
		} while (a[j] > pivot);

		if (i >= j)
		{
			return j;
		}

		swap(a[i], a[j]);
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
	int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};

	int n = sizeof(arr) / sizeof(int);
	int low = 0;
	int high = n - 1;

	display(arr, n);

	cout << hoareParition(arr, low, high) << endl;

	display(arr, n);

	return 0;
}