#include<bits/stdc++.h>
using namespace std;

// Contributed by anindiangeek
int CountDigits(int n) // O(1)
{
	return !n ? 0 : log10(n) + 1;
}

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
