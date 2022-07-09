#include<bits/stdc++.h>
using namespace std;

/*
HCF or GCD:
Greatest Common Divisor of two or more integers,
which are not all zero, is the largest positive
integer that divides each of the integers.
*/

//Time: O(min(a,b))
int hcf(int a, int b)
{
	int res = min(a, b);

	while (res > 0)
	{
		if (a % res == 0 and b % res == 0)
		{
			return res;
		}
		res--;
	}

	return res;
}

int main()
{
	int a1 = 13, b1 = 17;
	int a2 = 100, b2 = 200;

	cout << hcf(a1, b1) << endl;
	cout << hcf(a2, b2) << endl;
	return 0;
}