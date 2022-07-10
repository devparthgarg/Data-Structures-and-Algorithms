#include<bits/stdc++.h>
using namespace std;

//time: O(n*logn)
//space: O(1)
int minCoins(int coins[],int n,int amount)
{
    sort(coins,coins+n);

    int res=0;
    for(int i=n-1;i>=0;i--)
    {
        if(coins[i]<=amount)
        {
            int number_of_coins=floor(amount/coins[i]);
            res+=number_of_coins;
            amount=amount-number_of_coins*coins[i];
        }
    }

    return res;
}

int main()
{
    int coins[]={5,10,2,1};
    int n=4;
    int amount=57;

    cout<<minCoins(coins,n,amount)<<endl;
    return 0;
}