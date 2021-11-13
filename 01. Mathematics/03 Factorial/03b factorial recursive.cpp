#include<bits/stdc++.h>
using namespace std;

int factorial(int n)//time comp. O(n) ; space comp. O(n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int main()
{
	int n = 6;

	cout << factorial(n) << endl;
	return 0;
}