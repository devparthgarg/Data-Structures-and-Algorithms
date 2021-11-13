#include<bits/stdc++.h>
using namespace std;

//Euclid's Theorem Optimised
int hcf(int a, int b)//time comp. O(log(min(a,b))
{
	if (b == 0)
	{
		return a;
	}

	return hcf(b, a % b);
}

int hcf_one_liner(int a, int b)
{
	return b == 0 ? a : hcf_one_liner(b, a % b);
}

int main()
{
	int a1 = 13, b1 = 17;
	int a2 = 100, b2 = 200;

	cout << hcf(a1, b1) << endl;
	cout << hcf(a2, b2) << endl;

	cout << hcf_one_liner(a1, b1) << endl;
	cout << hcf_one_liner(a2, b2) << endl;
	return 0;
}