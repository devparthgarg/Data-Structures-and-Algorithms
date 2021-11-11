#include<bits/stdc++.h>
using namespace std;

void distinctInKSizeWindow(int *a, int n, int k)//time comp. O((n-k)*k) ; space comp. O(k)
{
	for (int i = 0; i <= n - k; i++)
	{
		set<int> s;
		for (int j = i; j < i + k; j++)
		{
			s.insert(a[j]);
		}
		cout << s.size() << " ";
	}
}

int main()
{
	int arr[] = {10, 10, 5, 3, 20, 5};
	int n = sizeof(arr) / sizeof(int);
	int k = 4;

	distinctInKSizeWindow(arr, n, k);
	return 0;
}