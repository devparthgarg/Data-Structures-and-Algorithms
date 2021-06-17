#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
	double r1=(double)(p1.second/p1.first);
	double r2=(double)(p2.second/p2.first);

	return r1>r2;
}

int knapsack(vector<pair<int,int>> v,int n,int capacity)//time comp. O(n*logn) ; space comp. O(1)
{
	//sort according to decreasing ratio of value/weight
	sort(v.begin(),v.end(),compare);

	double amount=0;
	for(int i=0;i<n;i++)
	{
		if(v[i].first<=capacity)
		{
			amount=amount+v[i].second;
			capacity=capacity-v[i].first;
		}
		else
		{
			amount=amount+(v[i].second)*((double)(capacity)/(v[i].first));
			break;
		}
	}

	return amount;
}

int main()
{
	int n;
	cin>>n;

	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		int weight,value;
		cin>>weight>>value;
		v.push_back({weight,value});
	}

	int capacity;
	cin>>capacity;

	cout<<knapsack(v,n,capacity);
	return 0;
}