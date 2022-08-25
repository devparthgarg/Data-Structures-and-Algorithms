#include<bits/stdc++.h>
using namespace std;

/*
in an unsorted array check if a
triplet exists with given sum
*/

//two pointer approach - only applicable on sorted arrays
bool threeSum(int a[], int n, int sum)//time comp. O(n^2)
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
				return true;
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

	return false;
}

int main()
{
	int a[] = {2, 3, 4, 8, 9, 20, 40};
	int n = sizeof(a) / sizeof(int);
	int sum = 32;

	cout << threeSum(a, n, sum);
	return 0;
}