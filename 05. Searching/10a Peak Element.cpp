#include<bits/stdc++.h>
using namespace std;

/*
Peak element :
element which is strictly greater than its neighbours
for first element only check its next element
for last element only check its previous element

you need to return any peak element
*/

int peak(int a[], int n) //time comp. O(n) ; space comp. O(1)
{
	if (n == 1)
	{
		return a[0];
	}

	if (a[0] > a[1])
	{
		return a[0];
	}

	if (a[n - 1] > a[n - 2])
	{
		return a[n - 1];
	}

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
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cout << peak(a, n);
	return 0;
}