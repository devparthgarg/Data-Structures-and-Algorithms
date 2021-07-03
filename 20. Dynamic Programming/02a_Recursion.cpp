#include<bits/stdc++.h>
using namespace std;

int fib(int n)//time comp. O(2^n) 
{
	if(n==0 or n==1)
	{
		return n;
	}

	return fib(n-1)+fib(n-2);
}

int main()
{
	// nth fibonacci number
	int n;
	cin>>n;

	cout<<fib(n)<<endl;
	return 0;
}