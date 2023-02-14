#include<bits/stdc++.h>
using namespace std;

/*
find factorial of integer number n.
*/

//time: O(n)
//space: O(1)
int factorial(int n)
{
	int res=1;
	for(int i=2;i<=n;i++)
	{
		res=res*i;
	}

	return res;
}

int main()
{
	int n=5;

	cout<<factorial(n)<<endl;
	return 0;
}