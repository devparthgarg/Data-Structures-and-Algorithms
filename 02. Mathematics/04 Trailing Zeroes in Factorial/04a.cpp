#include<bits/stdc++.h>
using namespace std;

/*
find number of zeroes in factorial
of given number.
*/

int factorial(int n)
{
	int res=1;
	for(int i=2;i<=n;i++)
	{
		res=res*i;
	}

	return res;
}

//time: O(n)
//space: O(1)
//not optimised to find zeros in factorial
//of large numbers
int trailingZeroes(int n)
{
	//first find factorial of the number
	int factorial_n=factorial(n);

	//count zeros in factorial
	int res=0;
	while(factorial_n%10==0)
	{
		res++;
		factorial_n=factorial_n/10;
	}

	return res;
}

int main()
{
	int n=10;

	cout<<trailingZeroes(n)<<endl;
	return 0;
}