#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int a[], int n)//time comp. O(n) ; space comp. O(1)
{
	if (n > 1)
	{
		int slow = a[n - 1];
		int fast = a[a[n - 1]];

		while (slow != fast)
		{
			slow = a[slow];
			fast = a[a[fast]];
		}

		fast = n - 1;
		while (slow != fast)
		{
			slow = a[slow];
			fast = a[fast];
		}

		return slow;
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