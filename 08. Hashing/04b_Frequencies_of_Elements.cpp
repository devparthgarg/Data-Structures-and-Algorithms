#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[],int n)//time comp. O(n)
{
	unordered_map<int,int> m;

	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}

	for(auto x:m)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}

int main()
{
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	frequencies(arr,n);
	return 0;
}