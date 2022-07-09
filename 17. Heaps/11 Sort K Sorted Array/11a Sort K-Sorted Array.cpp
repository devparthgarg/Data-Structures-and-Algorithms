#include<bits/stdc++.h>
using namespace std;

/*
Given an array of n elements, where each element is
at most k (index -> [i-k,i+k]) away from its target position.
Sort the array in minimum time complexity
*/

void kSorted(int a[], int n, int k)//time comp. O(n*logn) ; space comp. O(1)
{
	sort(a, a + n);
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
	int a[] = {10, 9, 8, 7, 4, 70, 50, 60};
	int n = sizeof(a) / sizeof(int);
	int k = 4;

	kSorted(a, n, k);
	display(a, n);

	return 0;
}