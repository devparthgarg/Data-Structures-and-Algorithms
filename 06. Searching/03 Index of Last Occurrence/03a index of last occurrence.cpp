#include<bits/stdc++.h>
using namespace std;

//time: O(n)
int lastOccurrence(vector<int> nums,int key)
{
    int n=nums.size();
    for (int i = n-1; i>=0; i--)
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

    cout<<lastOccurrence(nums,3)<<endl;
    return 0;
}