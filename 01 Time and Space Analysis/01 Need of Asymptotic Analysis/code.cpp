#include<bits/stdc++.h>
using namespace std;

int sum1(int n)
{
    int res=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            res++;
        }
    }
    
    return res;
}

int sum2(int n)
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        res+=i;
    }
    
    return res;
}

int sum3(int n)
{
    return (n*(n+1))/2;
}

int main()
{
    int n=4;
    
    cout<<sum1(n)<<endl;
    cout<<sum2(n)<<endl;
    cout<<sum3(n)<<endl;
    
    /*
    which of the above is most efficient ?
    so,use asymptotic analysis to find out.
    */
    
    return 0;
}