#include<bits/stdc++.h>
using namespace std;

int dp[100000];

//Memoization
int fib(int n)//time comp. O(n) ; space comp. O(n)
{
	if (dp[n] == -1)
	{
		if (n <= 1)
		{
			return dp[n] = n;
		}

		return dp[n] = fib(n - 1) + fib(n - 2);
	}

	return dp[n];
}

int main()
{
	int n = 5;

	memset(dp, -1, sizeof(dp)); //fill memo array with -1

	cout << fib(n) << endl;
	return 0;
}