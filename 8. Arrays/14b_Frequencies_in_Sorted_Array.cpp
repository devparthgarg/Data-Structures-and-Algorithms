#include<bits/stdc++.h>
using namespace std;

void printFrequencies(int *a,int n)//time comp. O(n) : as i is incremented in both loops
{
    int freq=1,i=1;
    
    while(i<n)
    {
        while(i<n and a[i]==a[i-1])
        {
            freq++;
            i++;
        }
        cout<<a[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 or a[n-1]!=a[n-2])
    {
        cout<<a[n-1]<<" 1"<<endl;
    }

    return ;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    printFrequencies(arr,n);
    return 0;
}