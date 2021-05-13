#include<bits/stdc++.h>
using namespace std;

//Naive Solution - Causes overflow
int countZeroes(int n)//time comp. O(n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact=fact*i;
    }

    int res=0;
    while(fact%10==0)
    {
        fact=fact/10;
        res++;
    }

    return res;
}

//Efficient Solution - count number of times 5 occurs
int countZeroesEfficient(int n)//time comp. O(Logn)
{
    int cnt=0;

    for(int i=5;i<=n;i=i*5)
    {
        cnt=cnt+n/i;
    }

    return cnt;
}

int main()
{
    int n;
    cin>>n;

    cout<<countZeroesEfficient(n);    
    return 0;
}