#include<bits/stdc++.h>
using namespace std;

/*
check if given number prime
or not.
*/

//time: O(sqrt(n))
//space: O(1)
bool isPrime(int n)
{
	/*
	divisors always appear in pairs.
	eg: 30=(1,30);(2,15);(3,10);(5,6)

	from above:
		x*y=n
	also,
		x<=y
		x*x<=x*y
		x*x<=n
	therefore:
		x<=sqrt(n)
	*/
	
	if(n==1)
	{
		return false;
	}

	for(int i=2;i*i<=n;i++)
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