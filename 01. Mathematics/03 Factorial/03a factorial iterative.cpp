#include<bits/stdc++.h>
using namespace std;

int factorial(int n)//time comp. O(n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = res * i;
	}

	return res;
}

int main()
{
	int n = 6;

	cout << factorial(n) << endl;
	return 0;
}