#include<bits/stdc++.h>
using namespace std;

// Divisors in sorted order
void allDivisors(int n) //Time Complexity : O(n^(1/2))
{
    int i;

    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }

    for(;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<(n/i)<<" ";
        }
    }

    return ;
}

int main()
{
    int n;
    cin>>n;

    allDivisors(n);
    return 0;
}