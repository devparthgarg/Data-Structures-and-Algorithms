#include<bits/stdc++.h>
using namespace std;

/*
check if given number prime
or not.
*/

//time: O(n)
//space: O(1)
bool isPrime(int n)
{
	if(n==1)
	{
		return false;
	}

	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n=13;

	cout<<isPrime(n)<<endl;
	return 0;
}