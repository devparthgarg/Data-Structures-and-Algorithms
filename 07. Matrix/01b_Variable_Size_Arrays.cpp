#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=3,n=2;
    int arr[m][n];

    int val=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=val;
            val++;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}