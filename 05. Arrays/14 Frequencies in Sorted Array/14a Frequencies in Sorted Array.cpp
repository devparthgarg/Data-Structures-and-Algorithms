#include<bits/stdc++.h>
using namespace std;

void printFrequencies(int *a,int n)//time comp. O(n^2)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        int e=a[i];
        for(int j=0;j<n;j++)
        {
            if(e==a[j])
            {
                count++;
                i++;
            }
        }   
        i--;
        cout<<a[i]<<" "<<count<<endl;
    }
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

    printFrequencies(a,n);
    return 0;
}