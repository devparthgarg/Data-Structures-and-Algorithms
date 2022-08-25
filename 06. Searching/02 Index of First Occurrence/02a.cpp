#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int firstOccurrence(vector<int> nums,int key)
{
    int n=nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums={1,2,3,3,3,4,5,6};

    cout<<firstOccurrence(nums,3)<<endl;
    return 0;
}