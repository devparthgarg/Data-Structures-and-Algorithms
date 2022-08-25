#include<bits/stdc++.h>
using namespace std;

//time: O(logn)
//space: O(logn)
int lastOccurrence(vector<int> nums, int low, int high, int key)
{
    //base case
    if (low > high)
    {
        return -1;
    }

    //recursive case
    int mid = (low + high) / 2;
    if (nums[mid] > key)
    {
        return lastOccurrence(nums, low, mid - 1, key);
    }
    else if (nums[mid] < key)
    {
        return lastOccurrence(nums, mid + 1, high, key);
    }
    else
    {
        if (mid == nums.size()-1 or nums[mid + 1] != nums[mid])
        {
            return mid;
        }
        else
        {
            return lastOccurrence(nums, mid+1, high, key);
        }
    }
}

int main()
{
    vector<int> nums={1,2,3,3,3,4,5,6};

    cout<<lastOccurrence(nums,0,nums.size()-1,3)<<endl;
    return 0;
}