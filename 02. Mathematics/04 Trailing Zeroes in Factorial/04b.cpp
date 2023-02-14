#include<bits/stdc++.h>
using namespace std;

/*
find number of zeroes in factorial
of given number.
*/

//time: O(log5(n))
//space: O(1)
//optimised
int trailingZeroes(int n)
{
	//we need to count number of zeroes
	//one zero is made of one 5 and one 2.
	//we also know that there are less number
	//of 5's in a factorial.
	//so, count only number of 5's in factorial.

	int res=0;
	int p=5;

	while(p<=n)
	{
		res+=(n/p);
		p=p*5;
	}

	return res;
}

int main()
{
	int n1=10,n2=100;

	cout<<trailingZeroes(n1)<<endl<<trailingZeroes(n2)<<endl;
	return 0;
}