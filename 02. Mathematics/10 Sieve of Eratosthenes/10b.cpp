#include<bits/stdc++.h>
using namespace std;

/*
print prime numbers less than
equal to given number
*/

//time: O(n*log(log(n)))
//space: O(1)
//Sieve Method
void printPrimes(int n)
{
	/*
	1. Make a vector of (n+1) size all
	values intialized to true.
	
	2. Start traversing from index 2 to n.

	3. If current number is true then mark
	all it multiples false, continue this upto n. 
	
	4. Traverse again from 2 to n and print values
	which are true.
	*/

	vector<bool> prime(n+1,true);

	for(int i=2;i*i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=2*i;j<=n;j+=i)
			{
				prime[j]=false;
			}
		}
	}

	for(int i=2;i<=n;i++)
	{
		if(prime[i])
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