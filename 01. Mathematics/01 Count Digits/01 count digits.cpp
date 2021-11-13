#include<bits/stdc++.h>
using namespace std;

int countDigits(int n)//time comp. O(d) ; d:number of digits
{
	int d = 0;

	while (n)
	{
		n = n / 10;
		d++;
	}

	return d;
}

int main()
{
	int n = 12345;

	cout << countDigits(n) << endl;
	return 0;
}