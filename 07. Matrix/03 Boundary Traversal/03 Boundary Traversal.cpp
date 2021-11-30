#include<bits/stdc++.h>
using namespace std;
const int r=4,c=4;

void boundaryTraversal(int arr[r][c])//time comp. O(n)
{
    if(r==1)
    {
        for(int i=0;i<c;i++)
        {
            cout<<arr[0][i]<<" ";
        }
    }
    else if(c==1)
    {
        for(int i=0;i<r;i++)
        {
            cout<<arr[i][0]<<" ";
        }
    }
    else 
    {
        for(int i=0;i<c;i++)
        {
            cout<<arr[0][i]<<" ";
        }
        for(int i=1;i<r;i++)
        {
            cout<<arr[i][c-1]<<" ";
        }
        for(int i=c-2;i>=0;i--)
        {
            cout<<arr[r-1][i]<<" ";
        }
        for(int i=r-2;i>=1;i--)
        {
            cout<<arr[i][0]<<" ";
        }
    }
}

int main()
{
    int arr[r][c];
    
    int val=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=val;
            val++;
        }
    }

    boundaryTraversal(arr);
    return 0;
}