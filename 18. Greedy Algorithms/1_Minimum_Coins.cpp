#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

int minimumCoins(int *coins,int n,int amount)
{
    //sort coins in decreasing order
    sort(coins,coins+n,compare);

    int res=0;

    for(int i=0;i<n;i++)
    {
        if(coins[i]<=amount)
        {
            int count=amount/coins[i];
            res=res+count;
            amount=amount-count*coins[i];
        }

        if(amount==0)
        {
            break;
        }
    }
    return res;
}

int main()
{
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(coins)/sizeof(int);
    int amount=2888;

    cout<<minimumCoins(coins,n,amount);
    return 0;
}