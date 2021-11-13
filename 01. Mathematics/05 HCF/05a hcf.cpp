#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b)//time comp. O(min(a,b))
{
	int res = min(a, b);

	while (res >= 1)
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