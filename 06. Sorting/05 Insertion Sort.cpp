#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n) //time comp. O(n^2) (best case O(n)); space comp. O(1) ; stable algorithm
{
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while (j >= 0 and a[j] > key) //for inserting element in correct position
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
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
	int a[] = {3, 2, 4, 1, 5};
	int n = sizeof(a) / sizeof(int);

	display(a, n);
	insertionSort(a, n);
	display(a, n);

	return 0;
}
