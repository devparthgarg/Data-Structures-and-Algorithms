#include<bits/stdc++.h>
using namespace std;

//find the element which occurs only once

//trick 1 : xor of same numbers gives zero
//trick 2 : xor of zero with any number returns original number
int unique(int a[], int n)//time comp. O(n)
{
	int X = 0;

	for (int i = 0; i < n; i++)
	{
		X = X ^ a[i];
	}

	return X;
}

int main()
{
	int a[] = {1, 9, 2, 8, 3, 1, 9, 2, 8};
	int n = sizeof(a) / sizeof(int);

	cout << unique(a, n);
	return 0;
}