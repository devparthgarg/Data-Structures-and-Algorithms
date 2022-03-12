#include<bits/stdc++.h>
using namespace std;

//Time: O(n^2)
//Space: O(n)
int longestSubstring(string s)
{
	int n = s.size();
	int maxL = 0;

	for (int i = 0; i < n; i++)
	{
		set<char> set;
		for (int j = i; j < n; j++)
		{
			if (set.find(s[j]) != set.end())
			{
				break;
			}
			else
			{
				set.insert(s[j]);
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