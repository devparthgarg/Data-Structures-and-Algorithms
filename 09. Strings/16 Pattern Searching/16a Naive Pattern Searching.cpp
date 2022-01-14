#include<bits/stdc++.h>
using namespace std;

//Time: O(n^2)
//Space: O(1)
void patternSearch(string s, string txt)
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