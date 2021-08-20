#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b)//time comp. O(a*b)
{
	int res = max(a, b);

	while (true)
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