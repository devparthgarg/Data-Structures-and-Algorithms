#include<bits/stdc++.h>
using namespace std;

//time: O(n)
//space: O(n)
//span=idx_curr_ele - idx_previous_greater_ele
//(in case of no previous greater than add 1 in curr_ele idx)
void printSpan(int arr[],int n)
{
    stack<int> s;
    s.push(0);
    cout<<1<<" ";

    for(int i=1;i<n;i++)
    {
        while(s.size() and arr[s.top()]<=arr[i])
        {
            s.pop();
        }
        int span=s.empty()?i+1:i-s.top();
        cout<<span<<" ";
        s.push(i);
    }
}

int main() 
{ 
    int arr[]={18,12,13,14,11,16};
    int n=6;

    printSpan(arr,n);
    return 0; 
}
