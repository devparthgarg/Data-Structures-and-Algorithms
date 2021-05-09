#include<bits/stdc++.h>
using namespace std;

int fib(int n)//time comp. O(n) ; space comp. O(n)
{
	int f[10000];
	memset(f,-1,sizeof(f));

	f[0]=0;
	f[1]=1;

	for(int i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}

	return f[n];
}

int main()
{
	// nth fibonacci number
	int n;
	cin>>n;

	cout<<fib(n)<<endl;
	return 0;
}