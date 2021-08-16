#include<bits/stdc++.h>
using namespace std;

//naive method
void patternSearch(string txt, string pat)//time comp. O(n^2) ; space comp. O(1)
{
	int n = txt.length();
	int m = pat.length();

	for (int i = 0; i <= n - m; i++)
	{
		bool flag = true;
		for (int j = 0; j < m; j++)
		{
			if (pat[j] != txt[i + j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << i << " ";
		}
	}
}

int main()
{
	string txt = "AAAAAA";
	string pat = "AAA";

	patternSearch(txt, pat);
	return 0;
}