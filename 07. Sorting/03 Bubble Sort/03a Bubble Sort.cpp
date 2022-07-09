#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) //time comp. O(n^2) ; space comp. O(1) ; stable algorithm
{
	for (int i = 0; i < n - 1; i++) //n-1 passes
	{
		for (int j = 0; j < n - i - 1; j++) //for bubbling(largest element at last -> second largest at it correct positon...)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
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
	bubbleSort(a, n);
	display(a, n);

	return 0;
}