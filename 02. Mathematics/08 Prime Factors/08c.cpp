#include<bits/stdc++.h>
using namespace std;

/*
print all the prime
factors of given number.
*/

//time: O(sqrt(n))
//space: O(1)
//efficient for large values of n
void primeFactors(int n)
{
	if(n<=1)
	{
		return ;
	}

	while(n%2==0)
	{
		cout<<2<<" ";
		n=n/2;
	}

	while(n%3==0)
	{
		cout<<3<<" ";
		n=n/3;
	}

	for(int i=5;i*i<=n;i+=6)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}

		while(n%(i+2)==0)
		{
			cout<<i+2<<" ";
			n=n/(i+2);
		}
	}

	if(n>1)
	{
		cout<<n;
	}
}

int main()
{
	int n1=12,n2=315;

	primeFactors(n1);
	cout<<endl;

	primeFactors(n2);
	cout<<endl;

	return 0;
}