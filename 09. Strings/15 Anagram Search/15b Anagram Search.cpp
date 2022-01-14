#include<bits/stdc++.h>
using namespace std;

bool isSame(int a1[], int a2[])//time comp. O(1) ; constant because 256 is fixed
{
	for (int i = 0; i < 256; i++)
	{
		if (a1[i] != a2[i])
		{
			return false;
		}
	}

	return true;
}

//Time: O(m)
//Space: O(1)
bool isAnagramPresent(string &txt, string &pat)
{
	int m = txt.length();
	int n = pat.length();

	int cnt_txt[256] = {0};
	int cnt_pat[256] = {0};

	for (int i = 0; i < n; i++)
	{
		cnt_txt[txt[i]]++;
		cnt_pat[pat[i]]++;
	}

	bool flag = isSame(cnt_txt, cnt_pat);

	if (flag)
	{
		return true;
	}

	for (int i = n; i < m; i++)
	{
		if (isSame(cnt_txt, cnt_pat))
		{
			return true;
		}
		cnt_txt[txt[i]]++;
		cnt_txt[txt[i - n]]--;
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