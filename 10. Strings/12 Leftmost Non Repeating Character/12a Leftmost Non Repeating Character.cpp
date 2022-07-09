#include<bits/stdc++.h>
using namespace std;

//naive approach
int leftMostNonRepeating(string s)//time comp. O(n^2) ; space comp. O(1)
{
	int n = s.length();

	for (int i = 0; i < n; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			if (i != j and s[i] == s[j])
			{
				break;
			}
		}
		if (j == n)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	string s = "parthgargp";

	cout << leftMostNonRepeating(s);
	return 0;
}