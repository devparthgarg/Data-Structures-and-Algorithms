#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
	return p1.second<p2.second;
}

int numberOfActivities(vector<pair<int,int>> v,int n)//time comp. O(n*logn) (due to sorting) ; space comp. O(1)
{
	//sort according to finish time earlier
	sort(v.begin(),v.end(),compare);

	int cnt=1;
	int check=v[0].second;

	for(int i=1;i<n;i++)
	{
		if(v[i].first>=check)
		{
			cnt++;
			check=v[i].second;
		}
	}

	return cnt;
}

int main()
{
	int n;
	cin>>n;

	vector<pair<int,int>> v;

	for(int i=0;i<n;i++)
	{
		int s,e;
		cin>>s>>e;
		v.push_back({s,e});
	}

	cout<<numberOfActivities(v,n);
	return 0;
}