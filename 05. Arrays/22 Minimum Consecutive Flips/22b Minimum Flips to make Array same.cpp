#include<bits/stdc++.h>
using namespace std;

/*
given a boolean array , find min. number of flips to
make whole array same
*/

//time: O(n) (one traversal)
void minFlips(int a[],int n)
{
    /*
    trick:
    --> group counts are same: begin and end different of array [0,1,1]
    --> group count differ by one: begin and end same of array  [0,1,0]
    so,always reverse second group elements
    */

    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            if(a[i]!=a[0])
            {
                cout<<"from "<<i<<" to ";
            }
            else
            {
                cout<<i-1<<endl;
            }
        }
    }

    if(a[n-1]!=a[0])
    {
        cout<<n-1<<endl;
    }
}

int main()
{
    int arr[]={1,0,0,0,1,0,0,1,1,0,0};
    int n=sizeof(arr)/sizeof(int);

    minFlips(arr,n);
    return 0;
}