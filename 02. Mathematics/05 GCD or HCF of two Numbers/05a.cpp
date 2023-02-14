#include<bits/stdc++.h>
using namespace std;

/*
find gcd or hcf of two numbers.

HCF or GCD:
The highest common factor (HCF) is found by 
finding all common factors of two numbers and 
selecting the largest one.
*/

/*
This question also gives answer to the problem 
of largest square tile to fill whole rectangle 
of size 'axb'.
*/

//time: O(min(a,b))
//space: O(1)
int hcf(int a,int b)
{
	int res=min(a,b);
	while(res)
	{
		if(a%res==0 and b%res==0)
		{
			return res;
		}
		res--;
	}

	return 1;
}

int main()
{
	int a1=40,b1=60,a2=7,b2=13;

	cout<<hcf(a1,b1)<<endl<<hcf(a2,b2)<<endl;
	return 0;
}