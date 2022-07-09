#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)//time comp. O(n)
{
	if (s1.length() != s2.length())
	{
		return false;
	}

	int count[256] = {0};
	int n = s1.length();

	for (int i = 0; i < n; i++)
	{
		count[s1[i]]++;
		count[s2[i]]--;
	}

	for (int i = 0; i < 256; i++)
	{
		if (count[i] != 0)
		{
			return false;
		}
	}

	return true;
}

//Time: O((n-m+1)*m)
//Space: O(1)
bool isAnagramPresent(string &txt, string &pat)
{
	int m = txt.length();
	int n = pat.length();

	for (int i = 0; i <= m - n; i++)
	{
		if (isAnagram(txt.substr(i, n), pat))
		{
			return true;
		}
	}

	return false;
}

int main()
{
	string txt = "parthgarg";
	string pat = "thar";

	cout << isAnagramPresent(txt, pat) << endl;
	return 0;
}