#include<bits/stdc++.h>
using namespace std;

/*
Fact :
any prime no. except 2 and 3 can be written
in form of (6n+1) or (6n-1)
*/

/*
Divisors always appear in pairs
if (x,y) is a pair
x*y=n
and if (x<=y)
x*x <= n
x <= sqrt(n)
*/

bool isPrime(int n)//time comp. O(sqrt(n))
{
    if(n==1)
    {
        return false;
    }

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>>n;

    cout<<isPrime(n);   
    return 0;
}