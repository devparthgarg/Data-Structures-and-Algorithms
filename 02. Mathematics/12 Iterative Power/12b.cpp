#include<bits/stdc++.h>
using namespace std;

/*
compute x^n.
*/

//time: O(log(n))
//space: O(1)
//optimised solution using bitwise operators
int power(int x,int n)
{
	/*
	Binary Exponentiation:
	-->every number can be written
	as power of 2.
	-->we can traverse through all
	bits of a number(from lsb to msb)
	in log(n) time.
	*/

	int res=1;
	while(n)
	{
		if(n&1!=1)
		{
			x=x*x;
			n=n>>1;
		}
		else
		{
			res=res*x;
			n--;
		}
	}

	return res;
}

int main()
{
	int x1=2,n1=3;
	cout<<power(x1,n1)<<endl;

	int x2=3,n2=4;
	cout<<power(x2,n2)<<endl;

	return 0;
}