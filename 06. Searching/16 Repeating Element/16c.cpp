#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int a[], int n)//time comp. O(n) ; space comp. O(n)
{
	unordered_map<int, int> m;

	for (int i = 0; i < n; i++)
	{
		m[a[i]]++;
		if (m[a[i]] == 2)
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