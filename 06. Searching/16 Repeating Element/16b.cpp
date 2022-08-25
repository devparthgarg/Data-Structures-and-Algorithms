#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int a[], int n)//time comp. O(n*logn) ; space comp. O(1)
{
	sort(a, a + n);

	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			return a[i];
		}
	}

	return -1;
}

int main()
{
	int arr[] = {3, 2, 1, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n);
	return 0;
}