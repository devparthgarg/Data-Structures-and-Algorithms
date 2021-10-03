#include<bits/stdc++.h>
using namespace std;

void distinctInKSizeWindow(int a[], int n, int k)//time comp. O(n-k) ; space comp. O(k)
{
	unordered_map<int, int> m;

	for (int i = 0; i < k; i++)
	{
		m[a[i]]++;
	}

	cout << m.size() << " ";

	for (int i = k; i < n; i++)
	{
		m[a[i - k]]--;

		if (m[a[i - k]] == 0)
		{
			m.erase(a[i - k]);
		}

		m[a[i]]++;

		cout << m.size() << " ";
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