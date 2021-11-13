#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)//time comp. O(d) ; d:number of digits
{
	int org_no = n;
	int rev = 0;

	while (n)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;
	}

	if (rev == org_no)
	{
		return true;
	}

	return false;
}

int main()
{
	int n = 12321;

	cout << isPalindrome(n) << endl;
	return 0;
}