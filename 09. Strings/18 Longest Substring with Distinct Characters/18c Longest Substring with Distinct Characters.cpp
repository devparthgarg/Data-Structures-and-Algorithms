#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(n)
int longestSubstring(string s)
{
	int n = s.length();
	int maxL = 0;
	int i, j = 0;

	unordered_set<int> set;

	while (i < n and j < n)
	{
		if (set.find(s[j]) == set.end())
		{
			set.insert(s[j]);
			maxL = max(maxL, j - i + 1);
			j++;
		}
		else
		{
			set.erase(s[i++]);
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