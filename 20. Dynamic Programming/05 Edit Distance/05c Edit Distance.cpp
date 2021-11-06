#include<bits/stdc++.h>
using namespace std;

int mini(int x, int y, int z)
{
	return min(min(x, y), z);
}

//Tabulation
int editDistance(string s1, string s2, int m, int n)//time comp. O(n*m)
{
	int dp[m + 1][n + 1];

	for (int i = 0; i < m + 1; i++)
	{
		for (int j = 0; j < n + 1; j++)
		{
			if (i == 0)
			{
				dp[i][j] = j;
			}
			if (j == 0)
			{
				dp[i][j] = i;
			}
			if (i == 0 and j == 0)
			{
				dp[i][j] = 0;
			}
		}
	}

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1];
			}
			else
			{
				dp[i][j] = 1 + mini(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]);
			}
		}
	}

	return dp[m][n];
}

int main()
{
	string s1 = "saturday";
	string s2 = "sunday";

	int m = s1.length();
	int n = s2.length();

	cout << editDistance(s1, s2, m, n) << endl;
	return 0;
}