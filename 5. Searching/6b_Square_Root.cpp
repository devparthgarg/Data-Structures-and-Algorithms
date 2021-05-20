#include<bits/stdc++.h>
using namespace std;

//use binary search
int sqRoot(int n)//time comp. O(logn)
{
	int low=0;
	int high=n;

	int ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int res=mid*mid;

		if(res==n)
		{
			return mid;
		}
		else if(res>n)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
			ans=mid;
		}
	}

	return ans;
}

int main()
{
	int n;
	cin>>n;

	cout<<sqRoot(n);
	return 0;
}