#include<bits/stdc++.h>
using namespace std;

int m = 1e+7;
//optimised using bitwise operator for large values of x and n
int power(int x, int n)//time comp. O(logn)
{
	int res = 1;

	while (n)
	{
		if (n & 1)
		{
			res = (res * x) % m;
		}
		x = (x * x) % m;
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