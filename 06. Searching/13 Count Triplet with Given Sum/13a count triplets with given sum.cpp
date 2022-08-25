#include<bits/stdc++.h>
using namespace std;

int threeSum(int a[], int n, int sum) //time comp. O(n^3)
{
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (a[i] + a[j] + a[k] == sum)
				{
					cnt++;
				}
			}
		}
	}

	return cnt;
}

int main()
{
	int a[] = {0, -1, 2, -3, 1};
	int n = sizeof(a) / sizeof(int);
	int sum = -2;

	cout << threeSum(a, n, sum);
	return 0;
}