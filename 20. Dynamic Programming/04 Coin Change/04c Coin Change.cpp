#include<bits/stdc++.h>
using namespace std;

//Tabulation
int coinChange(int coins[], int n, int sum)//time comp. O(n*m)
{
	int dp[n + 1][sum + 1];

	memset(dp, 0, sizeof(dp));

	//intialisation
	for (int i = 0; i <= n; i++)
	{
		dp[i][0] = 1;
	}

	for (int j = 0; j <= sum; j++)
	{
		dp[0][j] = 0;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			if (coins[i - 1] > j)
			{
				dp[i][j] = dp[i - 1][j];
			}
			else
			{
				dp[i][j] = dp[i][j - coins[i - 1]] + dp[i - 1][j];
			}
		}
	}

	return dp[n][sum];
}

int main()
{
	int coins[] = {2, 5, 3, 6};
	int n = sizeof(coins) / sizeof(int);
	int sum = 10;

	cout << coinChange(coins, n, sum) << endl;
	return 0;
}