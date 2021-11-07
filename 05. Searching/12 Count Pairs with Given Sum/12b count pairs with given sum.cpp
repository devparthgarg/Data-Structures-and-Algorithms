#include<bits/stdc++.h>
using namespace std;

int twoSum(int a[], int n, int sum)//time comp. O(n) ; space comp. O(n)
{
	int cnt = 0;

	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		if (m.find(sum - a[i]) != m.end())
		{
			cnt += m[sum - a[i]];
		}
		m[a[i]]++;
	}

	return cnt;
}

int main()
{
	int a[] = {1, 1, 1, 1};
	int n = sizeof(a) / sizeof(int);
	int sum = 2;

	cout << twoSum(a, n, sum);
	return 0;
}