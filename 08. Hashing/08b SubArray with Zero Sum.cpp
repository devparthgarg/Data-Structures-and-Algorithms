#include<bits/stdc++.h>
using namespace std;

//trick : using prefix sum + hashing
bool isZero(int a[], int n) //time comp. O(n) ; space comp. O(n)
{
	unordered_set<int> s;
	int prefix_sum = 0;

	for (int i = 0; i < n; i++)
	{
		prefix_sum += a[i];
		if (s.find(prefix_sum) != s.end())
		{
			return true;
		}
		if (prefix_sum == 0)
		{
			return true;
		}
		s.insert(prefix_sum);
	}

	return false;
}

int main()
{
	int arr[] = {1, 4, 13, -3, -10, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << isZero(arr, n);
	return 0;
}