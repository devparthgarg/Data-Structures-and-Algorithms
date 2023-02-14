#include<bits/stdc++.h>
using namespace std;

/*
print all the prime
factors of given number.
*/

//time: O(sqrt(n))
//space: O(1)
void primeFactors(int n)
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

	int i=2;
	while(i*i<=n)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
		else
		{
			i++;
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