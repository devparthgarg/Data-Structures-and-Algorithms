#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
{
	return a>b;
}

int minimumCoins(int coins[],int n,int money)//time comp. O(n*logn) (due to sorting) ; space comp. O(1)
{
	//sort coins in decreasing order
	sort(coins,coins+n,compare);

	int res=0;

	for(int i=0;i<n;i++)
	{
		if(coins[i]<=money)
		{
			int c=floor(money/coins[i]);
			res=res+c;
			money=money-c*coins[i];
		}
		if(money==0)
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

	int money;
	cin>>money;

	int res=minimumCoins(coins,n,money);
	cout<<res;

	return 0;
}