#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
    {
        return false;
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

void printPrimes(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }

    return ;
}

int main()
{
    int n;
    cin>>n;

    printPrimes(n);
    return 0;
}