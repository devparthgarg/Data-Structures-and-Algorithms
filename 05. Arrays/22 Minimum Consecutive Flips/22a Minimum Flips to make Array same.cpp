#include<bits/stdc++.h>
using namespace std;

/*
given a boolean array , find min. number of flips to
make whole array same
*/

//time: O(n) (two traversals)
void minFlips(int a[],int n)
{
    int cnt0=0;//0s flip required
    int cnt1=0;//1s flip required

    for(int i=0;i<n;i++)
    {
        if(a[i]==0 and a[i-1]!=0)//counting 0s group
        {
            cnt0++;
        }
        if(a[i]==1 and a[i-1]!=1)//counting 1s group
        {
            cnt1++;
        }
    }

    int res=min(cnt0,cnt1);
    
    if(res==cnt0)
    {
        int i1,i2;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0 and a[i-1]!=0)
            {
                i1=i;
            }
            if(a[i]==0 and a[i+1]!=0)
            {
                i2=i;
                cout<<i1<<" "<<i2<<endl;
            }
        }
    }
    else
    {
        int i1,i2;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1 and a[i-1]!=1)
            {
                i1=i;
            }
            if(a[i]==1 and a[i+1]!=1)
            {
                i2=i;
                cout<<i1<<" "<<i2<<endl;
            }
        }
    }
}

int main()
{
    int arr[]={1,0,0,0,1,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);

    minFlips(arr,n);
    return 0;
}