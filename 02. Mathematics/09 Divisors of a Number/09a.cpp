#include<bits/stdc++.h>
using namespace std;

/*
print all divisors of 
a number.
*/

//time: O(n)
//space: O(1)
void divisors(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
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