#include<bits/stdc++.h>
using namespace std;

int EculideanHCF(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }

    return a;
}

int EculideanHCFefficent(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return EculideanHCFefficent(b,a%b);
    }
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    cout<<EculideanHCF(n1,n2)<<endl;
    cout<<EculideanHCFefficent(n1,n2);    
    return 0;
}