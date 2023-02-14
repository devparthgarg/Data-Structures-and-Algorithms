#include<bits/stdc++.h>
using namespace std;

/*
print all the prime
factors of given number.
*/

bool isPrime(int n)
{
	if(n==1)
	{
		return false;
	}

	if(n==2 or n==3)
	{
		return true;
	}

	if(n%2==0 or n%3==0)
	{
		return false;
	}

	for(int i=5;i*i<=n;i+=6)
	{
		if(n%i==0 or n%(i+2)==0)
		{
			return false;
		}
	}

	return true;
}

//time: O(n*sqrt(n))
//space: O(1)
void primeFactors(int n)
{
	int i=2;
	while(i<=n)
	{
		if(n%i==0 and isPrime(i))
		{
			cout<<i<<" ";
			n=n/i;
		}
		else
		{
			i++;
		}
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