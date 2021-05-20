#include<bits/stdc++.h>
using namespace std;

//naive method
int linearSearch(int a[],int n,int key)//time comp. O(n)
{
    for(int i=n;i>=0;i--)
    {
        if(a[i]==key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;
    cin>>key;

    cout<<linearSearch(a,n,key);
    return 0;
}