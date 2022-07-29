#include<bits/stdc++.h>
using namespace std;

//time: O(n*n)
int majorityElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>(n/2))
        {
            return arr[i];
        }
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
