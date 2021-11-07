#include<bits/stdc++.h>
using namespace std;

//two pointer approach - only applicable on sorted arrays
int threeSum(int a[], int n, int sum) //time comp. O(n^2)
{
	for (int i = 0; i < n; i++)
	{
		int p1 = i + 1;
		int p2 = n - 1;

		while (p1 < p2)
		{
			int curr_sum = a[i] + a[p1] + a[p2];
			if (curr_sum == sum)
			{
				cnt++;
			}
			else if (curr_sum > sum)
			{
				p2--;
			}
			else
			{
				p1++;
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