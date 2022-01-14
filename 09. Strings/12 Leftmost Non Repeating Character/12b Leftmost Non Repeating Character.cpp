#include<bits/stdc++.h>
using namespace std;

//efficient approach
int leftMostNonRepeating(string s)//time comp. O(n) ; space comp. O(1)
{
	int count[256] = {0};
	int n = s.length();

	for (int i = 0; i < n; i++)
	{
		count[s[i]]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (count[s[i]] == 1)
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