#include<bits/stdc++.h>
using namespace std;

/*
compute x^n.
*/

//time: O(log(n))
//space: O(logn(n))
int power(int x,int n)
{
	if(n==0)
	{
		return 1;
	}

	int res=1;
	int temp=power(x,n/2);
	temp=temp*temp;

	if(n%2==0)
	{
		return temp;
	}
	else
	{
		return temp*x;
	}
}

int main()
{
	int x1=2,n1=3;
	cout<<power(x1,n1)<<endl;

	int x2=3,n2=4;
	cout<<power(x2,n2)<<endl;

	return 0;
}