#include<bits/stdc++.h>
using namespace std;

/*
Suitable for large values of n
*/

/*
Euclid's Theorem Optimised:
instead of subtraction, if we divide the
smaller number, the algorithm stops when
we find remainder 0.
*/

//Time: O(log(min(a,b))
int hcf(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return hcf(b, a % b);
}

int main()
{
	int a1 = 13, b1 = 17;
	int a2 = 100, b2 = 200;

	cout << hcf(a1, b1) << endl;
	cout << hcf(a2, b2) << endl;
	return 0;
}