#include<bits/stdc++.h>
using namespace std;

/*
print prime numbers less than
equal to given number
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
void printPrimes(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i))
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	int n1=10,n2=23;

	printPrimes(n1);
	cout<<endl;

	printPrimes(n2);
	cout<<endl;

	return 0;
}