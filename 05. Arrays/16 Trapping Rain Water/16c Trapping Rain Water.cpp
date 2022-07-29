#include<bits/stdc++.h>
using namespace std;

//time: O(n) 
//space: O(1)
int trapRainWater(vector<int> height)
{
    int n=height.size();
    int maxl=height[0];
    int maxr=height[n-1];
    int res=0;
    int left=1;
    int right=n-2;
    
    while(left<=right)
    {
        if(maxl<maxr)
        {
            if(height[left]>=maxl)
            {
                maxl=height[left];
            }
            else
            {
                res+=maxl-height[left];
            }
            left++;
        }
        else
        {
            if(height[right]>=maxr)
            {
                maxr=height[right];
            }
            else
            {
                res+=maxr-height[right];
            }
            right--;
        }
    }
    
    return res;                 
}

int main()
{
    vector<int> height={3,0,1,2,5};

    cout<<trapRainWater(height)<<endl;
    return 0;
}