#include<bits/stdc++.h>
using namespace std;

//Tabulation
int lcs(string s1, string s2, int m, int n) //time comp. O(m*n)
{
	int dp[m + 1][n + 1]; //2D array because 2 parameters are changing m and n
	memset(dp, 0, sizeof(dp));

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	return dp[m][n];
}

int main()
{
	string s1 = "AXYZ";
	string s2 = "BAZ";

	int m = s1.length();
	int n = s2.length();

	cout << lcs(s1, s2, m, n) << endl;
	return 0;
}