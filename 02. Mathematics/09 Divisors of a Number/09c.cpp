#include<bits/stdc++.h>
using namespace std;

/*
print all divisors of 
a number.
*/

//time: O(sqrt(n))
//space: O(1)
//order is not disturbed
void divisors(int n)
{
	//print from 1 to sqrt(n) (exclusive)
	int i;
	for(i=1;i*i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}

	//print from sqrt(n) (inclusive) to n (inclusive)
	for(;i>=1;i--)
	{
		if(n%i==0)
		{
			cout<<n/i<<" ";
		}
	}
}

int main()
{
	int n1=15,n2=100;

	divisors(n1);
	cout<<endl;

	divisors(n2);
	cout<<endl;

	return 0;
}