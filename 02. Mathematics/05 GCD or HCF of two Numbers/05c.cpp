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

/*
Euclid's Theorem:
if a==b:
	return a
if a>b:
	hcf(a,b)=hcf(a-b,b)
else:
	hcf(a,b)=hcf(b,a)
*/

//time: O(log(min(a,b)))
//space: O(log(min(a,b)))
//optimised Euclid's Algo
int hcf(int a,int b)
{
	return (b==0)?a:hcf(b,a%b);
}

int main()
{
	int a1=40,b1=60,a2=7,b2=13;

	cout<<hcf(a1,b1)<<endl<<hcf(a2,b2)<<endl;
	return 0;
}