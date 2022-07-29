#include<bits/stdc++.h>
using namespace std;

//time: O(n*n)
void printFrequencies(int *a,int n)
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
        cout<<e<<" "<<count<<endl;
    }
}

int main()
{
    int arr[]={10,10,10,25,30,30};
    int n=sizeof(arr)/sizeof(int);

    printFrequencies(arr,n);
    return 0;
}