#include<bits/stdc++.h>
using namespace std;

//time: O(n*n)
//space: O(1)
void printSpan(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int span=1;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<=arr[i])
            {
                span++;
            }
        }
        cout<<span<<" ";
    }   
}

int main() 
{ 
    int arr[]={18,12,13,14,11,16};
    int n=6;

    printSpan(arr,n);
    return 0; 
}
