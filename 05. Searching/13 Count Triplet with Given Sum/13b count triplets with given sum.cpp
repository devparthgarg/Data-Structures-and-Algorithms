#include<bits/stdc++.h>
using namespace std;

//two pointer approach - only applicable on sorted arrays
int threeSum(int a[], int n, int sum)//time comp. O(n^2) ; space comp. O(n)
{
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		unordered_set<int> s;
		for (int j = i + 1; j < n; j++)
		{
			int x = sum - (a[i] + a[j]);

			if (s.find(x) != s.end())
			{
				cnt++;
			}
			else
			{
				s.insert(a[j]);
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