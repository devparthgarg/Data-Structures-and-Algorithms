#include<bits/stdc++.h>
using namespace std;

int min(int x, int y, int z)
{
	return min(min(x, y), z);
}

//Recursion
int editDistance(string s1, string s2, int m, int n)//time comp. O(2^n)
{
	//base cases
	if (m == 0)
	{
		return n;
	}

	if (n == 0)
	{
		return m;
	}

	//recursive case
	if (s1[m - 1] == s2[n - 1])
	{
		return editDistance(s1, s2, m - 1, n - 1);
	}

	return 1 + min(editDistance(s1, s2, m - 1, n),
	               editDistance(s1, s2, m, n - 1),
	               editDistance(s1, s2, m - 1, n - 1));
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