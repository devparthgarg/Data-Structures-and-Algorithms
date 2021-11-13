#include<bits/stdc++.h>
using namespace std;

//optimised using bitwise operator
int power(int x, int n)//time comp. O(logn)
{
	int res = 1;

	while (n)
	{
		if (n & 1)
		{
			res = res * x;
		}
		x = x * x;
		n = n >> 1;
	}

	return res;
}

int main()
{
	int x = 2, n = 3;

	cout << power(x, n) << endl;
	return 0;
}