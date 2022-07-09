#include<bits/stdc++.h>
using namespace std;

/*
Palindrome :
	A palindrome is a word, number, phrase, or other sequence of characters
	which reads the same backward as forward, such as madam or racecar.
*/

//Time: O(n)
//Space: O(n)

bool isPalindrome(string s)
{
	string rev = s;

	//reverse function
	reverse(rev.begin(), rev.end());

	return (rev == s);
}

int main()
{
	string s = "madam";

	cout << isPalindrome(s);
	return 0;
}