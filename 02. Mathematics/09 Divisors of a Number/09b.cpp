#include<bits/stdc++.h>
using namespace std;

/*
print all divisors of 
a number.
*/

//time: O(sqrt(n))
//space: O(1)
//order is disturbed
void divisors(int n)
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

	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
			if(i!=n/i)
			{
				cout<<n/i<<" ";
			}
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