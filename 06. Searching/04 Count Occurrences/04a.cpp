#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int countOccurrence(vector<int> nums,int key)
{
    int n=nums.size();
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == key)
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    vector<int> nums={1,2,3,3,3,4,5,6};

    cout<<countOccurrence(nums,3)<<endl;
    return 0;
}