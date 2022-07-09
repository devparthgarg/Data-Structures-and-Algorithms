#include <bits/stdc++.h>
using namespace std;

//time: O(n)
//space: O(n)
void printPrevGreater(int arr[],int n)
{
    stack<int> s;
    s.push(0);
    cout<<-1<<" ";

    for(int i=1;i<n;i++)
    {
        while(s.size() and arr[s.top()]<arr[i])
        {
            s.pop();
        }
        int e=s.empty()?-1:arr[s.top()];
        cout<<e<<" ";
        s.push(i);
    }
}

int main() 
{ 
    int arr[]={20,30,10,5,15};
    int n=5;
    printPrevGreater(arr,n);
    return 0; 
}
