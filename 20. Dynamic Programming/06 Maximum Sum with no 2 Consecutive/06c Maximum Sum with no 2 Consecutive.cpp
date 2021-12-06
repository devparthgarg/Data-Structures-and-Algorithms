#include<bits/stdc++.h>
using namespace std;

//Tabulation
int maxSum(vector<int>& nums, int n, int dp[])//time comp. O(n)
{
	int dp[n + 1];
	memset(dp, 0, sizeof(dp));

	dp[0] = 0;
	dp[1] = nums[0];
	dp[2] = max(nums[0], nums[1]);

	for (int i = 3; i <= n; i++)
	{
		dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
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