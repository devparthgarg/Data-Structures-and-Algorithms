#include<bits/stdc++.h>
using namespace std;

/*
Palindrome :
	A palindrome is a word, number, phrase, or other sequence of characters
	which reads the same backward as forward, such as madam or racecar.
*/

//efficient solution
bool isPalindrome(string s)//time comp. O(n) ; space comp. O(1)
{
	int i=0;
	int j=s.length()-1;

	while(i<j)
	{
		if(s[i]==s[j])
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
	string s="madam";
	cin>>s;

	cout<<isPalindrome(s);
	return 0;
}