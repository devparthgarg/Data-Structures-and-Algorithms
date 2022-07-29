#include<bits/stdc++.h>
using namespace std;

//Moore's Voting Algorithm
//time: O(n)
int majorityElement(int arr[],int n)
{
    int res=0;
    int cnt=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[res])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        if(cnt==0)
        {
            res=i;
            cnt=1;
        }
    }

    int occ=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[res])
        {
            occ++;
        }
    }

    if(occ>(n/2))
    {
        return arr[res];
    }

    return -1;
}

int main()
{
    int arr[]={1,2,1,3,1};
    int n=sizeof(arr)/sizeof(int);

    cout<<majorityElement(arr,n)<<endl;    
    return 0;
}
