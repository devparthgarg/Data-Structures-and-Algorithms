#include<bits/stdc++.h>
using namespace std;

int kthSmallestElement(int a[], int n, int k)//time comp. O(n*logn) ; space comp. O(1)
{
	sort(a, a + n);

	return a[k - 1];
}

int main()
{
	int a[] = {3, 6, 1, 8, 9};
	int n = sizeof(a) / sizeof(int);
	int k = 2;

	cout << kthSmallestElement(a, n, 2);
	return 0;
}