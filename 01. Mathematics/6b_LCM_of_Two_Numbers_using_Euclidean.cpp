#include<bits/stdc++.h>
using namespace std;

/*
Relation between LCM and GCD
    LCM*GCD=a*b
*/

int gcd(int a,int b)//time comp. O(log(min(a,b)))
{
    return b==0?a:gcd(b,a%b);
}

int LCM(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    cout<<LCM(n1,n2);    
    return 0;
}