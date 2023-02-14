#include<bits/stdc++.h>
using namespace std;

/*
check whether given integer number
palindrome or not.
*/

//time: O(log10(n))
//space: O(1)
bool isPalindrome(int n)
{
	int org_no=n;

	//reverse the number
	int rev=0;
	while(n)
	{
		int d=n%10;
		rev=rev*10+d;
		n=n/10;
	}

	return (org_no==rev);
}

int main()
{
	int n=12321;

	cout<<isPalindrome(n)<<endl;
	return 0;
}