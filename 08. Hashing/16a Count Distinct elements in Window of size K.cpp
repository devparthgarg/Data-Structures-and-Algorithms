#include<bits/stdc++.h>
using namespace std;

void countDistinct(int *a, int n, int k)
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
	int arr[] = {10, 20, 10, 10, 30, 40};
	int n = sizeof(arr) / sizeof(int);
	int k = 4;

	countDistinct(arr, n, k);
	return 0;
}