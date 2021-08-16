#include<bits/stdc++.h>
using namespace std;

void patternSearch(string s, string txt)//time comp. O(n^2) ; space comp. O(1)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s.substr(i, txt.length()) == txt)
		{
			cout << i << " ";
		}
	}
}

int main()
{
	string s = "AAAAAA";
	string txt = "AAA";

	patternSearch(s, txt);
	return 0;
}