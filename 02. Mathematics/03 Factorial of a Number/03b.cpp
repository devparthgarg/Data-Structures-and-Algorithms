#include<bits/stdc++.h>
using namespace std;

/*
find factorial of integer number n.
*/

//time: O(n)
//space: O(n)
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}

	return (n*factorial(n-1));
}

int main()
{
	int n=5;

	cout<<factorial(n)<<endl;
	return 0;
}