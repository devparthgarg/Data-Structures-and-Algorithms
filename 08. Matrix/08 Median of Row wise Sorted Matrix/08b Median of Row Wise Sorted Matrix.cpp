#include<bits/stdc++.h>
using namespace std;

/*Assumptions :
1.odd sized arrays
2.all distinct elements*/
int median(vector<vector<int>>& v)//time comp. O(r*log(c)*log(max-min))
{
	int row=v.size();
	int col=v[0].size();

	//find minimum and maximum element
	int min_e=INT_MAX;
	int max_e=INT_MIN;

	for(int i=0;i<row;i++)
	{
		min_e=min(min_e,v[i][0]);
		max_e=max(max_e,v[i][col-1]);
	}

	//position of median element
	int pos=(row*col+1)/2;

	//apply binary search on range min_e and max_e
	while(min_e<max_e)
	{
		int mid=(min_e+max_e)/2;
		int mid_pos=0;

		for(int i=0;i<row;i++)
		{
			mid_pos+=upper_bound(v[i].begin(),v[i].end(),mid)-v[i].begin();
		}

		if(mid_pos<pos)
		{
			min_e=mid+1;
		}
		else
		{
			max_e=mid;
		}
	}

	return min_e;
}

int main()
{
	vector<vector<int>> v = {
		{2, 4, 6, 8, 10},
		{1, 3, 5, 7, 9},
		{100, 200, 400, 500, 800}
	};

	cout << median(v);
	return 0;
}