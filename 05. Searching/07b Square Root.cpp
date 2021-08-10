#include<bits/stdc++.h>
using namespace std;

//Using Binary Search
int sqRoot(int n)//time comp. O(logn) ; space comp. O(1)
{
	int low = 0;
	int high = n;

	int ans = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		int res = mid * mid;

		if (res == n)
		{
			return mid;
		}
		else if (res > n)
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