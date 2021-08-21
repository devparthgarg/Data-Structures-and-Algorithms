#include<bits/stdc++.h>
using namespace std;

/*
find the only repeating element considering all conditions below :
O(n) time
O(1) space
no modifications to original array
*/

int repeatingElement(int a[], int n) //time comp. O(n*logn) ; space comp. O(1)
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
	int arr[] = {1, 2, 3, 0, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n);
	return 0;
}