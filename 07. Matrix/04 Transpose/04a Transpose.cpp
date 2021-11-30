#include<bits/stdc++.h>
using namespace std;
const int n=4;

void transpose(int arr[n][n])//time comp. O(n^2)
{
   int temp[n][n];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           temp[i][j]=arr[j][i];
       }
   }

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           arr[i][j]=temp[i][j];
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
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
    return 0;
}
