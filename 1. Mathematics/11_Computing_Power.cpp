#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
    int res=1;
    for(int i=0;i<p;i++)
    {
        res=res*n;
    }

    return res;
}
int main()
{
    int n,p;
    cin>>n>>p;

    cout<<power(n,p);
    return 0;
}