#include<bits/stdc++.h>
using namespace std;

void kLargest(int a[], int n, int k)//time comp. O(n*logn) ; space comp. O(1)
{
	sort(a, a + n);

	int i = n - 1;
	while (k--)
	{
		cout << a[i] << " ";
		i--;
	}
}

int main()
{
	int a[] = {5, 15, 10, 20, 8};
	int n = sizeof(a) / sizeof(int);
	int k = 3;

	kLargest(a, n, k);
	return 0;
}