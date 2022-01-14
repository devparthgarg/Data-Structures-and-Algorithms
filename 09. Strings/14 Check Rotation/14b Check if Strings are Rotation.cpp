#include<bits/stdc++.h>
using namespace std;

//Time: O(n)
//Space: O(m+n)

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

	string temp = s1 + s1;

	return temp.find(s2) != string::npos;
}

int main()
{
	string s1 = "ABCD";
	string s2 = "CDAB";

	cout << isRotated(s1, s2);
	return 0;
}
