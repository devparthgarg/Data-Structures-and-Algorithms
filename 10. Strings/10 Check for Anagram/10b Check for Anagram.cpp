#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(1)

bool isAnagram(string s1, string s2)
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

int main()
{
	string s1 = "silent";
	string s2 = "listen";

	cout << isAnagram(s1, s2);
	return 0;
}