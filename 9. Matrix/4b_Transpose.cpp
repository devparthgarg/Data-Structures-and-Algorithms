#include<bits/stdc++.h>
using namespace std;
const int n=4;

void transpose(int arr[n][n])//one traversal
{
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           swap(arr[i][j],arr[j][i]);
       }
   }
}

int main()
{
    int arr[n][n];
    
    int val=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=val;
            val++;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    transpose(arr);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}