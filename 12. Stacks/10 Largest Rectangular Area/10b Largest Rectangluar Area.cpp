#include <bits/stdc++.h>
using namespace std;

//time: O(n)
//space: O(n)
int getMaxArea(int arr[],int n)
{
    stack<int> s;
    int res=0;
    int tp;
    int curr;

    for(int i=0;i<n;i++)
    {
        while(s.size() and arr[s.top()]>=arr[i])
        {
            tp=s.top();
            s.pop();
            curr=arr[tp]*(s.empty()?i:i-s.top()-1);
            res=max(res,curr);
        }
        s.push(i);
    }

    while(s.size())
    {
        tp=s.top();
        s.pop();
        curr=arr[tp]*(s.empty()?n:n-s.top()-1);
        res=max(res,curr);
    }

    return res;
}

int main() 
{ 
    int arr[]={6,2,5,4,1,5,6};
    int n=7;

    cout<<getMaxArea(arr,n)<<endl;
    return 0; 
}
