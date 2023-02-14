#include<bits/stdc++.h>
using namespace std;

/*
find lcm of two numbers.

LCM:
the least common multiple of two integers a and b, 
usually denoted by lcm, is the smallest positive 
integer that is divisible by both a and b.
*/

int hcf(int a,int b)
{
	return (b==0)?a:hcf(b,a%b);
}

//time: O(log(min(a,b)))
//space: O(log(min(a,b)))
int lcm(int a,int b)
{
	//using the formula:
	//LCM*GCD=a*b

	return ((a*b)/hcf(a,b));
}

int main()
{
	int a1=4,b1=6,a2=7,b2=13;

	cout<<lcm(a1,b1)<<endl<<lcm(a2,b2)<<endl;
	return 0;
}