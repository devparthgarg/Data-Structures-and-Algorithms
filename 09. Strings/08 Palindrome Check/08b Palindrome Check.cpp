#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(1)

bool isPalindrome(string s)
{
	int i = 0;
	int j = s.length() - 1;

	while (i < j)
	{
		if (s[i] == s[j])
		{
			i++;
			j--;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{
	string s = "madam";
	cin >> s;

	cout << isPalindrome(s);
	return 0;
}