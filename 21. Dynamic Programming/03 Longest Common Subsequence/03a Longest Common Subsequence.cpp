#include<bits/stdc++.h>
using namespace std;

//lcs:longest common subsequence

/*
subsequence explanation : for n characters string --> total subsequences : 2^n
eg: string : "ABC"
	subsequence : "","A","B","C","AB","BC","AC","ABC"
*/

//Recursive
int lcs(string s1, string s2, int m, int n) //time comp. O(2^n)
{
	//base case
	if (m == 0 or n == 0)
	{
		return 0;
	}

	//recursive case
	if (s1[m - 1] == s2[n - 1])
	{
		return 1 + lcs(s1, s2, m - 1, n - 1);
	}
	else
	{
		return max(lcs(s1, s2, m - 1, n), lcs(s1, s2, m, n - 1));
	}
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