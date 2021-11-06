#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

//Memoization
int coinChange(int coins[], int n, int sum)//time comp. O(n*m)
{
	if (dp[n][sum] == -1)
	{
		if (sum == 0)
		{
			return dp[n][sum] = 1;
		}

		if (n == 0)
		{
			return dp[n][sum] = 0;
		}

		if (coins[n - 1] > sum)
		{
			return dp[n][sum] = coinChange(coins, n - 1, sum);
		}

		return dp[n][sum] = coinChange(coins, n, sum - coins[n - 1]) + coinChange(coins, n - 1, sum);
	}

	return dp[n][sum];
}

int main()
{
	int coins[] = {2, 5, 3, 6};
	int n = sizeof(coins) / sizeof(int);
	int sum = 10;

	memset(dp, -1, sizeof(dp));

	cout << coinChange(coins, n, sum) << endl;
	return 0;
}