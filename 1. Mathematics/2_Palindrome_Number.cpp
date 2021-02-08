#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int rev=0;
    int m=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }

    if(rev==m)
    {
        return true;
    }
    
    return false;
}

int main()
{
    int n;
    cin>>n;

    cout<<palindrome(n);
    return 0;
}