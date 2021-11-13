#include<bits/stdc++.h>
using namespace std;

//Euclid's Theorem
int hcf(int a, int b)
{
	return b == 0 ? a : hcf(b, a % b);
}

int lcm(int a, int b)//time comp. O(log(min(a,b)))
{
	//using --> a*b=hcf*lcm
	return (a * b) / hcf(a, b);
}

int main()
{
	int a1 = 7, b1 = 11;
	int a2 = 2, b2 = 8;

	cout << lcm(a1, b1) << endl;
	cout << lcm(a2, b2) << endl;
	return 0;
}