#include<bits/stdc++.h>
using namespace std;

int sqRoot(int n)//time comp. O(logn)
{
	int low = 0;
	int high = n;

	int ans = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		int mid_sq = mid * mid;

		if (mid_sq == n)
		{
			return mid;
		}
		else if (mid_sq > n)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
			ans = mid;
		}
	}

	return ans;
}

int main()
{
	int n = 225;

	cout << sqRoot(n);
	return 0;
}