#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

int minCoins(int *coins,int n,int amount)
{
    //1. sort in decreasing order
    sort(coins,coins+n,compare);

    //2. intitalize result
    int res=0;

    //3. compare each coin and update remaining amount
    for(int i=0;i<n;i++)
    {
        if(coins[i]<=amount)
        {
            int c=amount/coins[i];
            res=res+c;
            amount=amount-c*coins[i];
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

    int amount;
    cin>>amount;

    cout<<minCoins(coins,n,amount);    
    return 0;
}