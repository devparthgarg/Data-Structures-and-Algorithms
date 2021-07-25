#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int a[], int n) //time comp. O(n) ; space comp. O(n)
{
	unordered_map<int, int> m;

	for (int i = 0; i < n; i++)
	{
		m[a[i]]++;
	}

	int e = 0;
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		if (cnt < m[a[i]])
		{
			cnt = m[a[i]];
			e = a[i];
		}
	}

	return e;
}

int main()
{
	int arr[] = {1, 2, 3, 0, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n);
	return 0;
}