#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000];

int min(int x, int y, int z)
{
	return min(min(x, y), z);
}

//Memoization
int editDistance(string s1, string s2, int m, int n)//time comp. O(n*m)
{
	if (dp[m][n] == -1)
	{
		//base cases
		if (m == 0)
		{
			return dp[m][n] = n;
		}

		if (n == 0)
		{
			return dp[m][n] = m;
		}

		//recursive case
		if (s1[m - 1] == s2[n - 1])
		{
			return dp[m][n] = editDistance(s1, s2, m - 1, n - 1);
		}

		return dp[m][n] = 1 + min(editDistance(s1, s2, m - 1, n),
		                          editDistance(s1, s2, m, n - 1),
		                          editDistance(s1, s2, m - 1, n - 1));
	}

	return dp[m][n];
}

int main()
{
	string s1 = "saturday";
	string s2 = "sunday";

	int m = s1.length();
	int n = s2.length();

	memset(dp, -1, sizeof(dp));

	cout << editDistance(s1, s2, m, n) << endl;
	return 0;
}