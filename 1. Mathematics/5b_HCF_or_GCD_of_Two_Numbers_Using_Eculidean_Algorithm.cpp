#include<bits/stdc++.h>
using namespace std;

int EculideanHCF1(int a,int b)//naive
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

int EculideanHCF2(int a,int b)//efficient
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return EculideanHCF2(b,a%b);
    }
}

int EculideanHCF3(int a,int b)//same as above but in one line
{
    return b==0?a:EculideanHCF3(b,a%b);
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    cout<<EculideanHCF1(n1,n2)<<endl;
    cout<<EculideanHCF2(n1,n2)<<endl;
    cout<<EculideanHCF3(n1,n2)<<endl;    
    return 0;
}