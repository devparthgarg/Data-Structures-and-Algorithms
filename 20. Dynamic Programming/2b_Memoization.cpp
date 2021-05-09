#include<bits/stdc++.h>
using namespace std;

int memo[100000];

int fib(int n)//time comp. O(n) ; space comp. O(n)
{
	if(memo[n]==-1)
	{
		int res;
		if(n==0 or n==1)
		{
			res=n;
		}
		else
		{
			res=fib(n-1)+fib(n-2);
		}
		memo[n]=res;
	}

	return memo[n];
}

int main()
{
	// nth fibonacci number
	int n;
	cin>>n;

	memset(memo,-1,sizeof(memo));//fill memo array with -1

	cout<<fib(n)<<endl;
	return 0;
}