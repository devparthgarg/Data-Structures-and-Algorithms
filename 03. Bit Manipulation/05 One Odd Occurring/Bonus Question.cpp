#include<bits/stdc++.h>
using namespace std;

//find the element which is missing from the range 1 to n

//trick 1 : xor of same numbers gives zero
//trick 2 : xor of zero with any number returns original number
int missing(int a[], int n)//time comp. O(n)
{
	int X = 0;
	for (int i = 1; i <= n; i++)
	{
		X = X ^ i;
	}

	for (int i = 0; i < n - 1; i++)
	{
		X = X ^ a[i];
	}

	return X;
}

int main()
{
	int a[] = {1, 2, 3, 5, 6, 7, 8};
	int n = 8;

	cout << missing(a, n) << endl;
	return 0;
}