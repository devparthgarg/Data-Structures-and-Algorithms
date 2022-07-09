#include<bits/stdc++.h>
using namespace std;

/*
Anagram :
	a word or phrase that is made by arranging the letters of
    another word or phrase in a different order

    eg : "silent" and "listen" are anagrams
*/

//Time: O(m*logm +n*logn)
//Space: O(1)

bool isAnagram(string s1, string s2)
{
	if (s1.length() != s2.length())
	{
		return false;
	}

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	return (s1 == s2);
}

int main()
{
	string s1 = "silent";
	string s2 = "listen";

	cout << isAnagram(s1, s2);
	return 0;
}