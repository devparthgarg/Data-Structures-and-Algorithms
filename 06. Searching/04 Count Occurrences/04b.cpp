#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> nums,int key)
{
    int n=nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] > key)
        {
            high = mid - 1;
        }
        else if (nums[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 or nums[mid - 1] != nums[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int lastOccurrence(vector<int> nums,int key)
{
    int n=nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] > key)
        {
            high = mid - 1;
        }
        else if (nums[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == (n-1) or nums[mid + 1] != nums[mid])
            {
                return mid;
            }
            else
            {
                low=mid+1;
            }
        }
    }

    return -1;
}

//time: O(logn)
int countOccurrence(vector<int> nums,int key)
{
    int first_idx=firstOccurrence(nums,key);

    if(first_idx==-1)
    {
        return 0;
    }

    int last_idx=lastOccurrence(nums,key);

    return (last_idx-first_idx+1);
}

int main()
{
    vector<int> nums={1,2,3,3,3,4,5,6};

    cout<<countOccurrence(nums,3)<<endl;
    return 0;
}