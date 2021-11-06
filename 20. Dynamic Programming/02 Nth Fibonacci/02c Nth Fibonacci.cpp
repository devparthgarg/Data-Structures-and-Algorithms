#include<bits/stdc++.h>
using namespace std;

//Tabulation
int fib(int n)//time comp. O(n) ; space comp. O(n)
{
	int dp[n + 1];
	memset(dp, -1, sizeof(dp));

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main()
{
	int n = 5;

	cout << fib(n) << endl;
	return 0;
}