#include<bits/stdc++.h>
using namespace std;

//Time: O(n^2)
//Space: O(1)

int leftMostRepeating(string s)
{
	int n = s.length();
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] == s[j])
			{
				return i;
			}
		}
	}

	return -1;
}

int main()
{
	string s = "parthgarg";

	cout << leftMostRepeating(s);
	return 0;
}