#include<bits/stdc++.h>
using namespace std;

void allDivisors(int n) //Time Complexity : O(n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
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

    allDivisors(n);
    return 0;
}