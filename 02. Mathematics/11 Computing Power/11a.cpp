#include<bits/stdc++.h>
using namespace std;

/*
compute x^n.
*/

//time: O(n)
//space: O(1)
int power(int x,int n)
{
	int res=1;

	while(n--)
	{
		res=res*x;
	}

	return res;
}

int main()
{
	int x1=2,n1=3;
	cout<<power(x1,n1)<<endl;

	int x2=3,n2=4;
	cout<<power(x2,n2)<<endl;

	return 0;
}