#include<bits/stdc++.h>
using namespace std;

/*
find lcm of two numbers.

LCM:
the least common multiple of two integers a and b, 
usually denoted by lcm, is the smallest positive 
integer that is divisible by both a and b.
*/

//time: O(a*b)
//space: O(1)
int lcm(int a,int b)
{
	int res=max(a,b);

	while(true)
	{
		if(res%a==0 and res%b==0)
		{
			break;
		}
		res++;
	}

	return res;
}

int main()
{
	int a1=4,b1=6,a2=7,b2=13;

	cout<<lcm(a1,b1)<<endl<<lcm(a2,b2)<<endl;
	return 0;
}