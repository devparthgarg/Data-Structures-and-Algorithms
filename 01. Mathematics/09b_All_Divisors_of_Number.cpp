#include<bits/stdc++.h>
using namespace std;

void allDivisors(int n) //Time Complexity : O(n^(1/2))
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i!=n/i)
            {
                cout<<n/i<<" ";
            }
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