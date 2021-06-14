#include<bits/stdc++.h>
using namespace std;

/*
3 methods :

a.iterative
b.recursive
c.logarithmic
*/

int countDigits(int n)//iterative solution
{
    int cnt=0;
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }

    return cnt;
}

int countDigits2(int n)//recursive solution
{
    if(n==0)
    {
        return 0;
    }

    return 1+countDigits2(n/10);
}

int countDigits3(int n)//logarithmic solution
{
    return floor(log10(n)+1);
}

int main()
{
    int n;
    cin>>n;

    cout<<countDigits(n)<<endl;
    cout<<countDigits2(n)<<endl;
    cout<<countDigits3(n)<<endl;
    return 0;
}