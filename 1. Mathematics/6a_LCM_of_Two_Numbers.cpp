#include<bits/stdc++.h>
using namespace std;

int LCM(int a,int b)//time comp. O(a*b-max(a,b))
{
    int res=max(a,b);
    while(true)
    {
        if(res%a==0 and res%b==0)
        {
            return res;
        }
        else
        {
            res++;
        }
    }

    return res;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    cout<<LCM(n1,n2);    
    return 0;
}