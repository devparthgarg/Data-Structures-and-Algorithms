#include<bits/stdc++.h>
using namespace std;

/*
Fact :
any prime no. except 2 and 3 can be written
in form of (6n+1) or (6n-1)
*/

// More Effcient Method for large value of n
bool isPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2 or n==3)
    {
        return true;
    }
    if(n%2==0 or n%3==0)
    {
        return false;
    }
    
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n*i==0 or n*(i+2)==0)
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