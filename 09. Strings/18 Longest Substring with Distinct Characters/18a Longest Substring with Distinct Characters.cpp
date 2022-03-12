#include<bits/stdc++.h>
using namespace std;

bool isDistinct(string s)
{
	set<char> set(s.begin(), s.end());

	return (s.size() == set.size());
}

//Time: O(n^3)
//Space: O(n)
int longestSubstring(string s)
{
	int n = s.size();
	int maxL = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			string temp = s.substr(i, j - i + 1);
			if (isDistinct(temp))
			{
				maxL = max(maxL, j - i + 1);
			}
		}
	}

	return maxL;
}

int main()
{
	string s = "abcabcdbb";

	cout << longestSubstring(s) << endl;
	return 0;
}