#include<bits/stdc++.h>
using namespace std;

/*
LCM:
the smallest positive integer that
is evenly divisible by both a and b.
*/

//Time: O(a*b)
int lcm(int a, int b)
{
	int res = max(a, b);

	while (res <= a * b)
	{
		if (res % a == 0 and res % b == 0)
		{
			break;
		}

		res++;
	}

	return res;
}

int main()
{
	int a1 = 7, b1 = 11;
	int a2 = 2, b2 = 8;

	cout << lcm(a1, b1) << endl;
	cout << lcm(a2, b2) << endl;
	return 0;
}