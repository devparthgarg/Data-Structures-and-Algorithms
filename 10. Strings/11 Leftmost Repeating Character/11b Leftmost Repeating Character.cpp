#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(1)

int leftMostRepeating(string s)
{
	int count[256] = {0};
	int n = s.length();

	for (int i = 0; i < n; i++)
	{
		count[s[i]]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (count[s[i]] > 1)
		{
			return i;
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