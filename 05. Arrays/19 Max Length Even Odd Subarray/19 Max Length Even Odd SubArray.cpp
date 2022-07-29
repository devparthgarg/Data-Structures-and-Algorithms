#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int maxLengthEvenOddSubArray(int *a,int n)
{
    /*
    concept : sum of two even no.s is even 
    also for two odd numbers sum is even 
    but for one even and one odd sum is odd. 
    */
    
    int len=1;
    int maxlen=1;

    for(int i=0;i<n-1;i++)
    {
        int sum=a[i]+a[i+1];

        if(sum%2==1)
        {
            len++;
            maxlen=max(len,maxlen);
        }
        else
        {
            len=1;
        }
    }

    return maxlen;
}

int main()
{
    int arr[]={1,2,3,4,5,7,9};
    int n=sizeof(arr)/sizeof(int);

    cout<<maxLengthEvenOddSubArray(arr,n)<<endl;
    return 0;
}