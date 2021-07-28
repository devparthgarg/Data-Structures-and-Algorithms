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

int main()
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	bubbleSort(a, n);

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}