#include<bits/stdc++.h>
using namespace std;

int countSetBit(int n)//time comp. O(total bits in n)
{
    int res=0;
    while(n!=0)
    {
        if(n&1==1)//same as n%2!=0
        {
            res++;
        }
        n=n>>1;//same as n=n/2
    }

    return res;
}

int main()
{
    int n=5;

    cout<<countSetBit(n);
    return 0;
}