#include<bits/stdc++.h>
using namespace std;

/*
check if given number prime
or not.
*/

//time: O(sqrt(n))
//space: O(1)
//efficient for large values of n
bool isPrime(int n)
{
	/*
	check for divisiblity of
	2 and 3 before hand to 
	save iterations.
	*/
	
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

int main()
{
	int n=13;

	cout<<isPrime(n)<<endl;
	return 0;
}