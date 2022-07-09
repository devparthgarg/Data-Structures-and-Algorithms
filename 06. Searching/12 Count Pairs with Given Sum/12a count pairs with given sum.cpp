#include<bits/stdc++.h>
using namespace std;

int twoSum(int a[], int n, int sum)//time comp. O(n^2)
{
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] + a[j] == sum)
			{
				cnt++;
			}
		}
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