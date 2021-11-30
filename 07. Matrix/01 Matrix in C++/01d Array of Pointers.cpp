#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=3,n=2;
    int *arr[m];
    
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }

    int val=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=val;
            cout<<arr[i][j]<<" ";
            val++;
        }
        cout<<endl;
    }
    return 0;
}