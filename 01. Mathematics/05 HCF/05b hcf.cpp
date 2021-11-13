#include<bits/stdc++.h>
using namespace std;

//Euclid's Theorem
int hcf(int a, int b)//time comp. O(log(min(a,b)))
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	return a;
}

int main()
{
	int a1 = 13, b1 = 17;
	int a2 = 100, b2 = 200;

	cout << hcf(a1, b1) << endl;
	cout << hcf(a2, b2) << endl;
	return 0;
}