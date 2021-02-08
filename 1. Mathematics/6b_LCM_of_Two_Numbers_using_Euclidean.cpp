#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
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