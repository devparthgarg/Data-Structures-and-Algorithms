#include<bits/stdc++.h>
using namespace std;

//Memoization
int maxSum(vector<int>& nums, int n, int dp[])//time comp. O(n)
{
	if (dp[n] == -1)
	{
		if (n == 1)
		{
			return nums[0];
		}
		else if (n == 2)
		{
			return max(nums[0], nums[1]);
		}
		else
		{
			return dp[n] = max(maxSum(nums, n - 1, dp), maxSum(nums, n - 2, dp) + nums[n - 1]);
		}
	}

	return dp[n];
}

int main()
{
	vector<int> nums{10, 5, 15, 20, 2, 30};
	int n = nums.size();

	int dp[n + 1];
	memset(dp, -1, sizeof(dp));

	dp[0] = 0;
	dp[1] = nums[0];
	dp[2] = max(nums[0], nums[1]);

	cout << maxSum(nums, n, dp) << endl;
	return 0;
}