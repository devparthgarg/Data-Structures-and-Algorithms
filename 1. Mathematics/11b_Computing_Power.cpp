#include<bits/stdc++.h>
using namespace std;

//efficient method
int power(int n,int p)//time comp. O(logp)
{
	if(p==0)
	{
		return 1;
	}

	int temp=power(n,p/2);
	temp=temp*temp;

	if(p%2==0)
	{
		return temp;
	}
	else
	{
		return temp*n;
	}
}

int main()
{
	int n,p;
	cin>>n>>p;

	cout<<power(n,p);
	return 0;
}