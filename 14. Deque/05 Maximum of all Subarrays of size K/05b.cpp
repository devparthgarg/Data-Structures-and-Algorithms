#include<bits/stdc++.h>
using namespace std;

/*
Trick:
store max element in front of deque.
check current element with element
at back of deque if it is small then
store it, if it is big then pop at back 
and store that one at back. 
*/

//Time: O(N)
//space: O(K)
void maxOfSubarrays(vector<int> nums,int k)
{
	//here deque stores indices
	deque<int> dq;
	for(int i=0;i<k;i++)
	{
		while(dq.empty()==false and nums[i]>=nums[dq.back()])
		{
			dq.pop_back();
		}
		dq.push_back(i);
	}

	for(int i=k;i<nums.size();i++)
	{
		cout<<nums[dq.front()]<<" ";

		while(dq.empty()==false and dq.front()<=(i-k))
		{
			dq.pop_front();
		}

		while(dq.empty()==false and nums[i]>=nums[dq.back()])
		{
			dq.pop_back();
		}

		dq.push_back(i);
	}

	cout<<nums[dq.front()]<<" ";
}

int main()
{
	vector<int> nums={10,8,5,12,15,7,6};
	int k=3;

	maxOfSubarrays(nums,k);
	cout<<endl;

	return 0;
}