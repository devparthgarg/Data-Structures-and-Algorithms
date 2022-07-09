#include<bits/stdc++.h>
using namespace std;

void rotate(string &s)
{
	char ch = s[0];
	for (int i = 1; i < s.length(); i++)
	{
		s[i - 1] = s[i];
	}
	s[s.length() - 1] = ch;
}

//Time: O(n^2)
//Space: O(1)
bool isRotated(string s1, string s2)
{
	if (s1 == s2)
	{
		return true;
	}
	if (s1.length() != s2.length())
	{
		return false;
	}

	int n = s1.length();
	for (int i = 0; i < n; i++)
	{
		if (s1 == s2)
		{
			return true;
		}
		else
		{
			//rotate s2
			rotate(s2);
		}
	}

	return false;
}

int main()
{
	string s1 = "ABCD";
	string s2 = "CDAB";

	cout << isRotated(s1, s2);
	return 0;
}