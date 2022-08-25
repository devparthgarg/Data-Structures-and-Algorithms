#include<bits/stdc++.h>
using namespace std;

double median(vector<int> &nums1,vector<int> &nums2)//Time: O(log(min(M,N))) ; Space: O(1)
{
	int n1=nums1.size();
	int n2=nums2.size();

	if(n1>n2)
	{
		return median(nums2,nums1);
	}

	int low=0;
	int high=n1;
	int medianPos=(n1+n2+1)/2;

	while(low<=high)
	{
		int cut1=(low+high)/2;
		int cut2=medianPos-cut1;

		int left1=cut1==0?INT_MIN:nums1[cut1-1];
		int left2=cut2==0?INT_MIN:nums2[cut2-1];

		int right1=cut1==n1?INT_MAX:nums1[cut1];
		int right2=cut2==n2?INT_MAX:nums2[cut2];

		if(left1<=right2 and left2<=right1)
		{
			if((n1+n2)%2==0)
			{
				return (max(left1,left2)+min(right1,right2))/2.0;
			}
			else
			{
				return (max(left1,left2));
			}
		}
		else if(left1>right2)
		{
			high=cut1-1;
		}
		else
		{
			low=cut1+1;
		}
	}

	return 0.0;
}

int main()
{
	vector<int> v1{10, 20, 30, 40, 50};
	vector<int> v2{5, 15, 25, 35, 45};

	int m = v1.size();
	int n = v2.size();

	cout << median(v1, v2)<<endl;
	return 0;
}