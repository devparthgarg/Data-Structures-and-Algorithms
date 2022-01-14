#include<bits/stdc++.h>
using namespace std;

//Time: O(m+n)
//Space: O(m+n)

bool isSubsequence(string s1, string s2, int m, int n)
{
	//base case
	if (n == 0)
	{
		return true;
	}

	if (m == 0)
	{
		return false;
	}

	//recursive case
	if (s1[m - 1] == s2[n - 1])
	{
		return isSubsequence(s1, s2, m - 1, n - 1);
	}
	else
	{
		return isSubsequence(s1, s2, m - 1, n);
	}
}

int main()
{
	string s1 = "parth";
	string s2 = "path";

	int m = s1.length();
	int n = s2.length();

	cout << isSubsequence(s1, s2, m, n);
	return 0;
}