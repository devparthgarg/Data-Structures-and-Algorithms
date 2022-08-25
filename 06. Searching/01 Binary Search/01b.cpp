#include<bits/stdc++.h>
using namespace std;

//time: O(logn)
//space: O(logn)
int binarySearch(vector<int> nums, int low, int high, int key)
{
    //base case
    if (low > high)
    {
        return -1;
    }

    //recursive case
    int mid = (low + high) / 2;
    if (nums[mid] == key)
    {
        return mid;
    }
    else if (nums[mid] > key)
    {
        return binarySearch(nums, low, mid - 1, key);
    }
    else
    {
        return binarySearch(nums, mid + 1, high, key);
    }
}

int main()
{
    vector<int> nums={1,2,3,4,5,6};

    cout<<binarySearch(nums,0,nums.size()-1,5)<<endl;
    return 0;
}