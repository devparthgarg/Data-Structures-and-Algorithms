#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int a[], int n) //time comp. O(n*n) ; space comp. O(1)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				return a[i];
			}
		}
	}

	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 0, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n);
	return 0;
}