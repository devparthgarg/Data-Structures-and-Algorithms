#include<bits/stdc++.h>
using namespace std;

//Recursion
int coinChange(int coins[], int n, int sum)//time comp. O(2^n)
{
	if (sum == 0)
	{
		return 1;
	}

	if (n == 0)
	{
		return 0;
	}

	if (coins[n - 1] > sum)
	{
		return coinChange(coins, n - 1, sum);
	}

	return coinChange(coins, n, sum - coins[n - 1]) + coinChange(coins, n - 1, sum);
}

int main()
{
	int coins[] = {2, 5, 3, 6};
	int n = sizeof(coins) / sizeof(int);
	int sum = 10;

	cout << coinChange(coins, n, sum) << endl;
	return 0;
}