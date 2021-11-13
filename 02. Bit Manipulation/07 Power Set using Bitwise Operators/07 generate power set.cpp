#include<bits/stdc++.h>
using namespace std;

void powerSet(string s)//time comp. O(n*(2^n))
{
	int n = s.length();
	int powSize = pow(2, n);

	for (int i = 0; i < powSize; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) != 0)
			{
				cout << s[j];
			}
		}
		cout << endl;
	}
}

int main()
{
	string s = "abc";

	powerSet(s);
	return 0;
}