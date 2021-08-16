#include<bits/stdc++.h>
using namespace std;

/*
Palindrome :
	A palindrome is a word, number, phrase, or other sequence of characters
	which reads the same backward as forward, such as madam or racecar.
*/

//naive method
bool isPalindrome(string s)//time comp. O(n) ; space comp. O(n)
{
	string rev=s;

	//reverse function
	reverse(rev.begin(),rev.end());

	return (rev==s);
}

int main()
{
	string s="madam";
	cin>>s;

	cout<<isPalindrome(s);
	return 0;
}