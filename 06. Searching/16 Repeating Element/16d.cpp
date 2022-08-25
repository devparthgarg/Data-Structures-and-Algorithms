#include<bits/stdc++.h>
using namespace std;

int repeatingElement(int nums[], int n)//time comp. O(n) ; space comp. O(1)
{
	int slow=nums[0];
    int fast=nums[nums[0]];
    
    while(slow!=fast)
    {
        slow=nums[slow];
        fast=nums[nums[fast]];
    }
    
    fast=0;
    while(slow!=fast)
    {
        slow=nums[slow];
        fast=nums[fast];
    }
    
    return slow;
}

int main()
{
	int arr[] = {3, 2, 1, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << repeatingElement(arr, n);
	return 0;
}