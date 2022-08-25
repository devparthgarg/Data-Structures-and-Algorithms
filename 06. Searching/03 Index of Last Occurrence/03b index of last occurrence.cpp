#include<bits/stdc++.h>
using namespace std;

//time: O(logn)
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

int main()
{
    vector<int> nums={1,2,3,3,3,4,5,6};

    cout<<lastOccurrence(nums,3)<<endl;
    return 0;
}