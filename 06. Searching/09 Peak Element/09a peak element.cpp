#include<bits/stdc++.h>
using namespace std;

/*
Peak element :
element which is strictly greater than its neighbours
for first element only check its next element
for last element only check its previous element

you need to return any peak element
*/

int peak(int a[], int n)//time comp. O(n)
{
	//base case
	if (n == 1)
	{
		return a[0];
	}

	//check first element
	if (a[0] > a[1])
	{
		return a[0];
	}

	//check last element
	if (a[n - 1] > a[n - 2])
	{
		return a[n - 1];
	}

	//check remaining elements
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] > a[i - 1] and a[i] > a[i + 1])
		{
			return a[i];
		}
	}

	return -1;
}

int main()
{
	int a[] = {5, 10, 20, 15, 7};
	int n = sizeof(a) / sizeof(int);

	cout << peak(a, n);
	return 0;
}