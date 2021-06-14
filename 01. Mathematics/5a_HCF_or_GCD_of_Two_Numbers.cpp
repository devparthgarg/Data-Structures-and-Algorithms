#include<bits/stdc++.h>
using namespace std;

int HCF(int a,int b)
{
    int res=min(a,b);
    while(res>0)
    {
        if(a%res==0 and b%res==0)
        {
            break;
        }
        else
        {
            res--;
        }
    }

    return res;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    cout<<HCF(n1,n2);    
    return 0;
}