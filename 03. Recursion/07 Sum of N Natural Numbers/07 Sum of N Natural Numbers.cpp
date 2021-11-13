#include<bits/stdc++.h>
using namespace std;

int sum(int n)//time complexity O(n)
{
    if(n==1)
    {
        return n;
    }   

    return n+sum(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<sum(n);
    
    return 0;
}