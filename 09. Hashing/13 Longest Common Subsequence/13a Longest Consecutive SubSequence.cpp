#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSubsequence(int a[], int n)//time comp. O(n*logn) ; space comp. O(1)
{
	sort(a, a + n);
	int res = 1, curr = 1;

	for (int i = 1; i < n; i++)
	{
		if (a[i] == a[i - 1] + 1)
		{
			curr++;
		}
		else
		{
			res = max(res, curr);
			curr = 1;
		}
	}

	return max(res, curr);
}

int main()
{
	int arr[] = {1, 9, 3, 4, 2, 20};
	int n = sizeof(arr) / sizeof(n);

	cout << longestConsecutiveSubsequence(arr, n);
	return 0;
}