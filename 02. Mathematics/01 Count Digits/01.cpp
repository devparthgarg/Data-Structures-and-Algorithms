#include<bits/stdc++.h>
using namespace std;

/*
count digit of integer number x.
*/

//time: O(log10(n))
//space: O(1)
int countDigits(int n)
{
	if(n==0)
	{
		return 1;
	}

	int res=0;
	while(n)
	{
		n=n/10;
		res++;
	}

	return res;
}

int main()
{
	int n=1313;

	cout<<countDigits(n)<<endl;
	return 0;
}