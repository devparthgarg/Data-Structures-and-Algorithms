#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(1)
void freq(string s)
{
	int n = s.length();
	int count[26] = {0};

	//fill count array
	for (int i = 0; i < n; i++)
	{
		count[s[i] - 'a']++;
	}

	//print output
	for (int i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{
			cout << char('a' + i) << " " << count[i] << endl;
		}
	}
}

int main()
{
	string s = "parthgarg";

	freq(s);
	return 0;
}