#include <bits/stdc++.h>
using namespace std;

//time: O(n)
//space: O(n)
void nextGreater(int arr[],int n)
{
    stack<int> s;
    vector<int> v;

    s.push(arr[n-1]);
    v.push_back(-1);

    for(int i=n-2;i>=0;i--)
    {
        while(s.size() and s.top()<arr[i])
        {
            s.pop();
        }

        int e=s.empty()?-1:s.top();
        s.push(arr[i]);
        v.push_back(e);
    }
    reverse(v.begin(),v.end());

    for(auto x:v)
    {
        cout<<x<<" ";
    }
}

int main() 
{ 
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;

    nextGreater(arr,n);
    return 0; 
}
