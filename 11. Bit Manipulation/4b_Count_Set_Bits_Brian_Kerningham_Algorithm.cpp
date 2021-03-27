#include<bits/stdc++.h>
using namespace std;

int countSetBit(int n)//time comp. O(total set bits in n)
{
    int res=0;
    while(n!=0)
    {
        n=n&(n-1);
        res++;
    }

    return res;
}

int main()
{
    int n=15;

    cout<<countSetBit(n);
    return 0;
}