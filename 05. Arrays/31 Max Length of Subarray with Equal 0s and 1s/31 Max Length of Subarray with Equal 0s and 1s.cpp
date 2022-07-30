#include<bits/stdc++.h>
using namespace std;

/*
binary array will be given
*/

//time: O(n)
//space: O(n)
int maxEqualLength(vector<int>& nums) 
{
    int n=nums.size();
    unordered_map<int,int> m;
    
    int maxlen=0;
    int presum=0;
    
    for(int i=0;i<n;i++)
    {
        presum+=nums[i]?1:-1;
        
        if(presum==0)
        {
            maxlen=max(maxlen,i+1);
        }
        if(m.find(presum)!=m.end())
        {
            maxlen=max(maxlen,i-m[presum]);
        }
        else
        {
            m[presum]=i;
        }
    }
    
    return maxlen;
}

int main()
{
	vector<int> nums={1,0,1,1,0,1,0};

	cout<<maxEqualLength(nums)<<endl;
	return 0;
}