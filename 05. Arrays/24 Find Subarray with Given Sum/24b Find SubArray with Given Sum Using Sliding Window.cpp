#include<bits/stdc++.h>
using namespace std;
/*
given an array(unsorted and non-negative integers) 
and a integer k find the maximum
sum of k consecutive elements
*/
bool subArray(int a[],int n,int sum)//time comp. O(n)
{
    int currSum=a[0],s=0;

    for(int i=1;i<n;i++)
    {
        //clean the prev window
        while(currSum>sum and s<i-1)
        {
            currSum=currSum-a[s];
            s++;
        }
        if(currSum==sum)
        {
            return true;
        }
        if(i<n)
        {
            currSum=currSum+a[i];
        }
    }

    return (currSum==sum);
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int sum;
    cin>>sum;

    cout<<subArray(a,n,sum);
    return 0;
}