#include<bits/stdc++.h>
using namespace std;

/*
Palindrome Numbers:
A number that remains the same
when its digits are reversed.
*/

//Time: O(logn)
bool isPalindrome(int n)
{
	int original_number = n;

	//reverse n
	int rev = 0;
	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	//check if original and rev same
	return (rev == original_number);
}

int main()
{
	int n = 12321;

	cout << isPalindrome(n) << endl;
	return 0;
}