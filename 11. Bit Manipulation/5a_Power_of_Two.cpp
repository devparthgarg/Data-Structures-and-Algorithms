#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n)//time comp. O(total bits in n)
{
    if(n==0 or n==1)
    {
        return false;
    }

    while(n!=1)
    {
        if(n%2!=0)
        {
            return false;
        }
        n=n/2;
    }

    return true;
}

int main()
{
    int n=2;

    cout<<powerOfTwo(n);
    return 0;
}